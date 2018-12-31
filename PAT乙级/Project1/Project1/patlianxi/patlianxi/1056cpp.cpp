#include<iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int x = 0;
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> x;
		sum += (N - 1) *(x+10*x);
	}
	cout << sum;
	return 0;
}