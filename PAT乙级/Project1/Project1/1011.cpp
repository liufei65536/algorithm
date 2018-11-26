#include<iostream>
using namespace std;
int main()
{
	int n;
	double A[11], B[11], C[11];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> A[i] >> B[i] >> C[i];
	}

	for (int i = 1; i <= n; i++) {
		if (A[i] + B[i] > C[i])
			cout << "Case #" << i << ": true\n";
		else
			cout << "Case #" << i << ": false\n";
	}

	return 0;
}