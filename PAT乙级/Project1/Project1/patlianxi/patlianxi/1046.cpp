#include<iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int a1,a2;
	int b1,b2;	
	int a_drinks = 0;
	int b_drinks = 0;
	for (int i = 0; i <N; i++) {
		cin >> a1 >> a2 >> b1 >> b2;
		int r = a1 + b1;
		if (r == a2 && r != b2)
			b_drinks++;
		if (r == b2 && r != a2)
			a_drinks++;
	}
	cout << a_drinks << " " << b_drinks;
	return 0;
}