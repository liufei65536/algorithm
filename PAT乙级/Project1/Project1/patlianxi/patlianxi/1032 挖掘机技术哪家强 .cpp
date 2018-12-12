#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int x, score;
	vector<int> n(N+1);
	for (int i = 0; i < N; i++) {
		cin >> x >> score;
		n[x] += score;
	}
	int max_pos=1;
	for (int i = 0; i < N; i++) {
		if (n[max_pos] < n[i])
			max_pos = i;
	}
	cout << max_pos<<" " << n[max_pos];
	return 0;
}