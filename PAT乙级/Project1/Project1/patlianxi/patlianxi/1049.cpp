#include<iostream>
using namespace std;
double sum_atob(double*arr, int a, int b);
int main()
{
	int N;
	cin >> N;
	double* a = new double[N];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	double sum = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++) {
			sum += sum_atob(a, i, j);
		}
	}

	printf("%.2f", sum);
	return 0;
}
double sum_atob(double *arr, int  a, int  b) {
	float sum = 0;
	for (int i = a; i <= b; i++)
		sum += arr[i];
	return sum;
}