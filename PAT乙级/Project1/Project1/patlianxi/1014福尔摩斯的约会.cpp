#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2;
	string s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	int len1 = s1.length();
	int len2 = s2.length();
	int len3 = s3.length();
	int len4 = s4.length();
	char f1 = ' ', f2= ' ';
	char f3= ' ', f4 = ' ';
	int min1 = len1 < len2 ? len1 : len2;
	int min2 = len3 < len4 ? len3 : len4;
	for (int i = 0; i < min1; i++) {
			if (s1[i] == s2[i] && isalpha((s1[i])) ) {
				if(f1 == ' ')
					f1 = s1[i];
				if (f1 != ' ')
					f2 = s1[i];
			}
		}
	for (int i = 0; i < min2; i++) {
		if (s3[i] == s4[i] && isalpha((s3[i]))) {
			if (f3 == ' ')
				f3 = s1[i];
			if (f3 != ' ')
				f4 = s1[i];
		}
	}

	cout << f1 << endl << f2 << endl << f3 << endl << f4 << endl;
	system("pause");
	return 0;
}