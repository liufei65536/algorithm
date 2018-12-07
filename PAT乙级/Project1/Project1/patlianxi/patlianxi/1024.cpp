//

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string n;
	cin >> n;
	int n_len = n.length();
	string s = n.substr(1, n.find('E')-1); //s是E之前的字符串
	string s2 = n.substr(n.find('E')+1, n_len); //s2是E之后的字符串
	int n_s2 = stoi(s2);


	//输出正常数字
	//负号
	if (n[0] == '-')
		cout << '-';
	// E<0,只要在小数点前加0
	if (n_s2 < 0) {
		cout << "0.";
		for (int i = 1; i < -n_s2; i++)
			cout << 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] != '.') {
				cout << s[i];
			}
		}
	}
	//E>=0时，要移动小数点，在补0
	else  {
		cout << s[0];
		int cnt, j;
		for (j = 2, cnt = 0; j < s.length() && cnt < n_s2; j++, cnt++)
			cout << s[j];
		//j == s.length 说明s中的数字已经输出完，后面位数用0补
		if (j == s.length()) {            
			for (int k = 0; k < n_s2 - cnt; k++)
				cout << 0;
		}
		//否则，小数点移动到这里，继续输出s剩下的数字
		else {
			cout << '.';
			cout << s.substr(j, s.length());
		}
	}

	return 0;
}