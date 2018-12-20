#include<iostream>
#include<string>
using namespace std;
int main()
{
	string sentence;
	getline(cin, sentence);
	int frenquency[256] = { 0 };
	for (int i = 0; i < sentence.length(); i++) {
			frenquency[ tolower(sentence[i])]++;
	}
	int max_pos = 'a';
	for (int i = 'b'; i <= 'z'; i++) {
		if (frenquency[i] > frenquency[max_pos]) {
			max_pos = i;
		}
	}
	char c = max_pos;
	cout << c << " " << frenquency[max_pos];
	return 0;

}