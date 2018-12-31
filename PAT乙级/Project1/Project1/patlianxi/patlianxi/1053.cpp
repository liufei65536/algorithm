#include<iostream>
using namespace std;
int main()
{
	int N;
	double e;  //低电量阈值
	int D;	   //观察阈值
	cin >> N >> e >> D;
	int prob_empty = 0;
	int empty=0;
	for (int i = 0; i < N; i++) {
		int k;//观察期
		cin >> k;
		int below_days = 0;//低于阈值e的日子
		float use=0; //用电量
		for (int j = 0; j < k; j++) {
			cin >> use;
			if (use < e)
				below_days++;
		}
		if (1.0*below_days / k > 0.5) {
			if (k > D)
				empty++;
			if (k <= D)
				prob_empty++;
		}	
	}
	printf("%.1f%% %.1f%%", 1.0*prob_empty/N*100, 1.0*empty/N*100);
	return 0;
}