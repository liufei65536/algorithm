#include<iostream>
#include<string>
using namespace std;
string marsLow[13] = { "tret","jan", "feb", "mar", "apr", "may",
"jun", "jly", "aug", "sep", "oct", "nov", "dec" };
string marsHigh[13] = { "","tam", "hel", "maa", "huh", "tou", "kes",
"hei", "elo", "syy", "lok", "mer", "jou" };
string toMars(int num) {
	int high = num / 13;
	int low = num % 13;
	string s;
	if (high > 0 ) {
		s = marsHigh[high];
		if(low>0) 
			s += " " + marsLow[low];
	}
	if(high==0) {
		s = marsLow[low];
	}

	return s;
}
int toNum(string temp) {
	for (int i = 0; i < 169; i++) {
		if (temp == toMars(i)) {
			return i;
		}
	}
}
int main()
{
	int N;
	cin >> N;
	getchar();
	string *s= new string[N+1];
	for(int i=0;i<N;i++)
		getline(cin, s[i]);
	for (int i = 0; i <N; i++) {
		
		if (isdigit(s[i][0])) {
			cout<<toMars(stod(s[i]))<<endl;
		}
		else {
			cout<<toNum(s[i])<<endl;
		}
	}
	return 0;
}