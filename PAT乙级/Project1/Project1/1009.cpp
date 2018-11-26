#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string* words[80];
	int n_words = 0;
	string str;
	getline(cin, str);
	int length = str.length();
	int begin = 0;
	for (int i = 0; i < length; i++) {
		if (str[i] == ' ' ) {
			words[n_words++] = new string(str,begin,i-begin);
			begin = i+1;
		}
		else if (i == length - 1) {
			words[n_words++] = new string(str, begin, i - begin+1);
			begin = i+1;
		}
	}
	for (int j = n_words-1; j >0; j--) {
		cout << *words[j] <<" ";
	}
	cout << *words[0];
	return 0;
}