#include<iostream>
using namespace std;
bool isPrime(int n) {
	bool isP = true;
	if (n == 2)
		return true;
	for (int i = 2; i < n; i++) {
		if (n %i == 0) {
			isP = false;
			break;
		}	
	}
	return isP;
}

void result(int id,int* rank ) {
	if (rank[id] == 1)
		cout << "Mystery Award\n" ;
	else if (isPrime(rank[id]))
		cout << "Minion\n" ;
	else
		cout << "Chocolate\n";
}
int main()
{
	int N; //参赛人数
	cin >> N;
	int rank[10001] = { 0 };
	//按ID存储排名
	for (int i = 0; i < N; i++) {
		int id;
		cin >>id;
		rank[id] = i+1;
	}
	int K;//K个要查询的ID
	cin >> K;
	int find[10001];
	int checked[10001] = { 0 }; //有没有查询过
	for (int i = 0; i < K; i++) {
		cin >> find[i];//读取待查询ID
	}
	//打印查询结果
	for (int i = 0; i < K; i++) {
		if (rank[find[i]] == 0) {
			printf("%04d: Are you kidding?\n", find[i]);
		}
			
		else if (!checked[find[i]]) {
			checked[find[i]] = 1;
			printf("%04d: ", find[i]);
			result(find[i], rank);
		}
		else {
			printf("%04d: Checked\n", find[i]);
		}
	}


	return 0;
}