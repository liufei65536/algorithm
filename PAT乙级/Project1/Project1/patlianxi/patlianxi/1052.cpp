#include<iostream>
#include<string>
using namespace std;
void getpic(string t, string hands[], int &n_hands);
int main()
{
	string hands[11];
	int n_hands = 0;
	string eyes[11];
	int n_eyes = 0;
	string mouths[11];
	int n_mouths = 0;
	string t;
	getline(cin, t);
	getpic(t, hands, n_hands);
	getline(cin, t);
	getpic(t, eyes, n_eyes);
	getline(cin, t);
	getpic(t, mouths, n_mouths);
	int n;
	cin >> n;
	int hands1[10000];
	int hands2[10000];
	int eyes1[10000];
	int eyes2[10000];
	int mouth1s[10000];
	for (int i = 0; i < n; i++) {
		cin >> hands1[i] >> eyes1[i] >> mouth1s[i] >> eyes2[i] >> hands2[i];
	}
	for (int i = 0; i < n; i++) {
		int h1=hands1[i], e1=eyes1[i],m= mouth1s[i],
			e2=eyes2[i], h2= hands2[i];

		if (h1 > n_hands || e1 > n_eyes || m > n_mouths || e2 > n_eyes || h2 > n_hands)
			cout << "Are you kidding me? @\\/@";
		else {
			cout << hands[h1]<<'(' << eyes[e1] << mouths[m] << eyes[e2] << ')' << hands[h2] << endl;
		}
	}
	return 0;
}
void getpic(string t,string hands[],int &n_hands) {
	int left = 0, right = 0;
	for (int i = 0; i < t.length(); i++) {
		if (t[i] == '[')
			left = i;
		if (t[i] == ']') {
			right = i;
			hands[++n_hands] =  t.substr(left+1, right-left-1);
		}
	}
}