#include<iostream>
using namespace std;
int getFriendNum(int num) {
	int sum = 0;
	while (num != 0) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}
void sort(int N,int* arrsum ) {
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - 1 - i; j++) {
			if (arrsum[j] > arrsum[j + 1]) {
				int x = arrsum[j];
				arrsum[j] = arrsum[j + 1];
				arrsum[j + 1] = x;
			}
		}
	}
}
int main()
{
	int N; cin >> N;
	int *arr = new int[N];
	int *arrsum = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		arrsum[i] = getFriendNum(arr[i]);
	}
	sort(N, arrsum);
	int nfriend = 0;
	int *arrfriend = new int[N];

	for (int i = 0; i < N; i++) {
		if (nfriend > 0) {
			if (arrsum[i] != arrfriend[nfriend - 1]) {
				arrfriend[nfriend++] = arrsum[i];
			}
		}
		if (nfriend == 0) {
				arrfriend[nfriend++] = arrsum[i];
		}	
	}
	cout << nfriend<<endl;
	for (int i = 0; i < nfriend-1; i++)
		cout << arrfriend[i]<<" ";
	cout << arrfriend[nfriend - 1];
	return 0;
}