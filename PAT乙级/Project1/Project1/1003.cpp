#include<iostream>
#include<string>
using namespace std;
bool isTrue(string s);
int main()
{
	int num;
	cin >> num;
	string str[10];
	for (int i = 0; i < num; i++) {
		cin >> str[i];
	}
	for (int i = 0; i < num; i++) {
		if (isTrue(str[i]))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
bool isTrue(string s) {
		int a[5] = { 0 };
		for (int i = 0; i < s.length(); i++) {
			if (s[i] != 'P' && s[i] != 'A' && s[i] != 'T') {
				return false;
			}
			if (s[i] == 'P') {
				a[0]++;
				if (a[1] != 0 || a[0] > 1) {
					return false;
				}
			}
			else if (s[i] == 'T') {
				a[1]++;
				if (a[0] == 0 || a[1] > 1) {
					return false;
				}
			}
			else {
				if (a[0] == 0 && a[1] == 0) {
					a[2]++;
				}
				else if (a[0] != 0 && a[1] == 0) {
					a[3]++;
				}
				else {
					a[4]++;
				}
			}
		}
		if (a[0] == 0 || a[1] == 0 || a[3] == 0) {
			return false;
		}
		else if (a[3] * a[2] != a[4]) {
			return false;
		}
		else 
			return true;
	}
