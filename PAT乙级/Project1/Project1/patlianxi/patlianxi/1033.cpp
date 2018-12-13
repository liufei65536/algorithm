#include <iostream>
#include<string>
#include <cctype>
using namespace std;
int main() {
	string bad, should;
	getline(cin, bad);  //为了防止第一行是空的，不能用cin >> ,用getline(cin, ...)
	getline(cin, should);
	for (int i = 0; i < should.length(); i++) {
		if (bad.find(toupper(should[i])) != string::npos) continue;
		if (isupper(should[i]) && bad.find('+') != string::npos) continue;
		cout << should[i];
	}
	return 0;
}