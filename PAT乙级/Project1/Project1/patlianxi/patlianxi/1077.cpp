#include<iostream>
using namespace std;
int getscore(int n,int m) {
	double G1 = 0;
	int G2 = 0;
	int cnt = 0;
	int *arr = new int[n];
	cin >> G2;
	for (int i = 0; i < n - 1; i++) {
		int t;
		cin >> t;
		if (0 <= t && t <= m) {		//合法输入
			arr[cnt++] = t;
		}
	}
	//升序排序
	for (int i = 0; i < cnt; i++) {
		for (int j = 0; j < cnt - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int k = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = k;
			}
		}
	}
	int sum = 0;
	for (int i = 1; i < cnt - 1; i++) {
		sum += arr[i];
	}
	G1 = 1.0*sum / (cnt - 2);
	int result = ((G1 + G2)) / 2+0.5;
	delete[] arr;
	return result;
}
int main()
{
	int n, m;  // 分组数 ；满分
	cin >> n >> m;  
	for (int i = 0; i < n; i++) {
		int score = getscore(n,m);
		cout << score<<endl;
	}
	return 0;
}