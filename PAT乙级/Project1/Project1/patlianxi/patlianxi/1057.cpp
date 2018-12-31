#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int sum = 0;
	for (int i = 0; i < s.length(); i++) {
		if (isalpha(s[i])) {
			sum += tolower(s[i]) - 'a'+1;
		}
	}
	//将sum转换成二进制
	int n = 0;
	int t[32] = { 0 };
	int cnt0 = 0, cnt1 = 0;
	for (int i = 0;  sum !=0 && i < 32  ; i++) {
		if (sum % 2) {
			t[i] = 1;
			cnt1++;
		}
		else {
			t[i] = 0;
			cnt0++;
		}
		sum /= 2;
	}
	for (int i = cnt0 + cnt1-1; i > -1; i--)
		cout << t[i];
	cout << cnt0 << " " << cnt1;
	return 0;

}
