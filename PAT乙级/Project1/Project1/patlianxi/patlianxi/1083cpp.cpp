#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int * cards = new int[N+1];
	int *cishu = new int[N + 1];
	for (int i = 0; i < N + 1; i++)
		cishu[i] = 0;
	for (int i = 1; i <= N; i++) {
		cin >> cards[i];
		int t = abs(cards[i] - i);
		cishu[t]++;
	}
	for (int i = N; i>=0; i--) {
		if (cishu[i]>1) {
			cout << i <<" "<< cishu[i] << endl;
		}
	}


	return 0;
}