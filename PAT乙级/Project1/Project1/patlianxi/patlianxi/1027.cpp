#include<iostream>
using namespace std;
void printsl(char ch, int n);
int main()
{
	int N; char ch;
	cin >> N >> ch;
	int sum = 0;
	int i=1;
	sum += i;
	for ( i = 3; sum <= N; i+=2) {
		sum += 2 * i;
	}
	i -= 2;
	sum -= 2 * i ;
	i -= 2;

	printsl(ch, i);
	cout << N - sum;
	return 0;
}

void printsl(char ch,int n) {
	for (int i = 0; i < (n+1)/2; i++) {
		for (int j = 0; j < i; j++) 
			cout << " ";
		for (int j = 0; j < n - 2*i; j++)
			cout << ch;
		cout << endl;
	}

	for (int i = (n+1)/2+1; i < (n + 1); i++) {
		for (int j = 0; j <n-i ; j++)
			cout << " ";
		for (int j = 0; j < 2 * i-n; j++)
			cout << ch;
		cout << endl;
	}
}
