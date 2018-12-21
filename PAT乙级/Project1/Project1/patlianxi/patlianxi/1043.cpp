#include <iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin >> s;
	int map[256] = { 0 };
	for (int i = 0; i < s.length(); i++)
		map[s[i]]++;
	while (map['P'] > 0 || map['A'] > 0 || map['T'] > 0 || map['e'] > 0 || map['s'] > 0 || map['t'] > 0) {
		if (map['P']-- > 0) cout << 'P';
		if (map['A']-- > 0) cout << 'A';
		if (map['T']-- > 0) cout << 'T';
		if (map['e']-- > 0) cout << 'e';
		if (map['s']-- > 0) cout << 's';
		if (map['t']-- > 0) cout << 't';
	}
	return 0;
}