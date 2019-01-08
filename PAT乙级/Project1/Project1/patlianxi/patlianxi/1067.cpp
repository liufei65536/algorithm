#include<iostream>
#include<string>
using namespace std;
int main()
{
	string the_password;
	int max_try_times;
	cin >> the_password >> max_try_times;
	string s[10001];
	int times = 0;
	getline(cin, s[times++]);
	do {
		getline(cin,s[times++]);
	} while (s[times-1] != "#");

	for (int i = 1; i <= max_try_times && s[i] != "#" && i<=times-1; i++) {
		if (s[i] == the_password && i <= max_try_times) {
			cout << "Welcome in" << endl;
			break;
		}
		if (s[i] != the_password && i<=max_try_times) {
			cout << "Wrong password: " << s[i] << endl;
			if (i == max_try_times) {
				cout << "Account locked" << endl;
				break;
			}
		}
	
	}

	return 0;
}