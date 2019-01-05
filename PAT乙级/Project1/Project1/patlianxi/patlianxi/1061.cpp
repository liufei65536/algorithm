#include<iostream>
using namespace std;
int main()
{
	int M, N; //学生人数和题目数量
	cin >> N >> M;
	int *score = new int[M+1];
	int *stu_score = new int[N+ 1];
	for (int i = 0; i < N; i++) {
		 stu_score[i] = 0;
	}
	for (int i = 0; i < M; i++) {
		cin >> score[i];
	}
	int *answer = new int[M + 1];
	for (int i = 0; i < M; i++) {
		cin >> answer[i];
	}
	int t;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> t;
			if (t == answer[j])
				stu_score[i] += score[j];
		}
	}
	for (int i = 0; i < N; i++) {
		cout << stu_score[i] << endl;
	}
	return 0;
}