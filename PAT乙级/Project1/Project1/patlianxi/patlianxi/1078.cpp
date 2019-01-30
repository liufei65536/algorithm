#include<iostream>
#include<string>
using namespace std;
void jieya(string ln) {
	for (int i = 0; i < ln.length(); i++) {
		int times = 0;
		while(isdigit(ln[i])) {
			times = times *10 + (ln[i] - '0');
			i++;
		}
		for (int j = 0; j < times; j++) {
			cout << ln[i ];
		}
		if (times == 0)
			cout << ln[i];
		
	}
}
void yasuo(string ln) {
	for (int i = 0; i < ln.length(); i++) {
		int count = 0;
		while (ln[i] == ln[i + 1]) {
			i++; count++;
		}
		if (count != 0)
			cout << count + 1;
		cout << ln[i];
	}
}
int main()
{
	char choice; //CÑ¹Ëõ£¬ D½âÑ¹
	string ln;
	cin >> choice;
	getchar();
	getline(cin, ln);
	//C
	if (choice == 'C')
		yasuo(ln);
	else
		jieya(ln);
	return 0;
}