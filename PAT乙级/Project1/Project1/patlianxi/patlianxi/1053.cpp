#include<iostream>
using namespace std;
int main()
{
	int N;
	double e;  //�͵�����ֵ
	int D;	   //�۲���ֵ
	cin >> N >> e >> D;
	int prob_empty = 0;
	int empty=0;
	for (int i = 0; i < N; i++) {
		int k;//�۲���
		cin >> k;
		int below_days = 0;//������ֵe������
		float use=0; //�õ���
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