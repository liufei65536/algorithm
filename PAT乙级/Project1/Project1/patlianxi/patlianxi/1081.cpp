#include<iostream>
#include<string>
using namespace std;
int judge(string s) {
	int len = s.length();
	int shuzi = 0;
	int zimu = 0;
	if (len < 6) {
		return 1; //Your password is tai duan le.
	}
	else {
		for (int i = 0; i < len; i++) {
			if (!isdigit(s[i]) && !isalpha(s[i]) && s[i]!='.') {
				return 2;//Your password is tai luan le.
			}
			if (isdigit(s[i]))
				shuzi++;
			if (isalpha(s[i]))
				zimu++;
		}
		if (shuzi == 0)
			return 3;//Your password needs shu zi.
		if (zimu == 0)
			return 4;//Your password needs zi mu.

	}
	return 5;//Your password is wan mei.
}

int main()
{
	int n;
	cin >> n;
	string s;
	getchar();
	for (int i = 0; i < n; i++) {
		getline(cin, s);
		int k = judge(s);
		switch (k)
		{
		case 1:
			cout <<"Your password is tai duan le.\n";
			break;
		case 2:
			cout << "Your password is tai luan le.\n";
			break;
		case 3:
			cout << "Your password needs shu zi.\n";
			break;
		case 4:
			cout << "Your password needs zi mu.\n";
			break;
		case 5:
			cout << "Your password is wan mei.\n";
			break;
		}
	}
	return 0;
}