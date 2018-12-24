#include<iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int team[10001] = { 0 };
	int max_pos=0;
	int max=0;
	for (int i = 0; i < N; i++) {
		int tmp;
		int num;
		int score;
		scanf_s("%d-%d %d",&tmp,&num,&score);
		team[tmp] += score;

		if (max < team[tmp]) {
			max_pos = tmp;
			max = team[tmp];
		}
	}
	cout << max_pos << " " << max;
	return 0;
}