#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int pwd[101];
	int cnt = 0;
	string s;
	getchar();      //°¡°¡°¡
	for (int i = 0; i < n; i++) {
		getline(cin,s);
		for (int j = 2; j <=14 ; j+=4) {
			if (s[j] == 'T') {
				pwd[cnt] = s[j-2] - 'A'+1;
				cnt++;
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << pwd[i];

	return 0;
}