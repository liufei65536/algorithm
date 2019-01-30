#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool judge(string s) {
	int len = s.length();
	for (int i = 0; i <len / 2; i++) {
		if (s[i] != s[len-1- i])
			return false;
	}
	return true;
}
void change(string &s) {
	int jinwei = 0;
	int t = 0;
	int len = s.length();
	string s2 = s;
	reverse(s.begin(), s.end());
	string s1 = s;
	for (int i = len - 1; i >= 0; i--) {
		t = s1[i] + s2[i] - 2 * '0' + jinwei;
		jinwei = t / 10;
		t = t % 10;
		s[i] = t+'0';
	}
	char c = jinwei+'0';
	if (jinwei > 0)
		s = c+s;
	cout << s2 << " + " << s1 << " = " << s<<endl;
}
int main()
{
	string s;
	cin >> s;
	int cnt = 0;
	while (cnt <10) {
		if (judge(s)) {
			cout << s << " is a palindromic number." << endl;
			break;
		}
		else {
			change(s);
			cnt++;
		}
	}
	if (cnt == 10) {
		cout << "Not found in 10 iterations." << endl;
	}
	return 0;
}