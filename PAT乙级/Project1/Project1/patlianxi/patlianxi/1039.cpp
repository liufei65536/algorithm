#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n[300] = { 0 };
	int n2[300] = { 0 };
	string s1;
	string s2;
	cin >> s1 >> s2;
	for (int i = 0; i < s1.length(); i++) 
		n[s1[i]]++;
	for (int i = 0; i < s2.length(); i++) 
		n2[s2[i]]++;

	int duo=0;
	int shao = 0; 


	for (int i = 0; i < 300; i++) {
		if (n[i] < n2[i]) {
			shao += n2[i] - n[i];
		}
		if (n[i] > n2[i]) {
			duo += n[i] - n2[i];
		}
	}
	if (shao > 0) {
		cout << "No " << shao;
	}
	else {
		cout << "Yes " << duo;
	}
	return 0;
}