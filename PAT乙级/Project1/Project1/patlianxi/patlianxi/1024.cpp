//

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string n;
	cin >> n;
	int n_len = n.length();
	string s = n.substr(1, n.find('E')-1); //s��E֮ǰ���ַ���
	string s2 = n.substr(n.find('E')+1, n_len); //s2��E֮����ַ���
	int n_s2 = stoi(s2);


	//�����������
	//����
	if (n[0] == '-')
		cout << '-';
	// E<0,ֻҪ��С����ǰ��0
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
	//E>=0ʱ��Ҫ�ƶ�С���㣬�ڲ�0
	else  {
		cout << s[0];
		int cnt, j;
		for (j = 2, cnt = 0; j < s.length() && cnt < n_s2; j++, cnt++)
			cout << s[j];
		//j == s.length ˵��s�е������Ѿ�����꣬����λ����0��
		if (j == s.length()) {            
			for (int k = 0; k < n_s2 - cnt; k++)
				cout << 0;
		}
		//����С�����ƶ�������������sʣ�µ�����
		else {
			cout << '.';
			cout << s.substr(j, s.length());
		}
	}

	return 0;
}