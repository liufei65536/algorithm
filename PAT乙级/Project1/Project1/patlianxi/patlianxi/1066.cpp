#include<iostream>
using namespace std;
int main()
{
	int m, n, left, right, k;
	cin >> m >> n >> left >> right >> k;
	int a[501][501];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			if (left <= a[i][j] && a[i][j] <= right) 
				a[i][j] = k;
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n-1; j++) {
			printf("%03d ", a[i][j]);
		}
		printf("%03d\n",a[i][n-1]);
	}

	return 0;
}