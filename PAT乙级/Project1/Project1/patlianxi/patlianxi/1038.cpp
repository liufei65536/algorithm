#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int temp;
	vector<int> same_score(101);
	for (int i = 0; i < N; i++) {
		cin >> temp;
		same_score[temp]++;
	}

	int n_score;
	cin >> n_score;
	vector<int> score(n_score);

	for (int i = 0; i < n_score; i++)
		cin >> score[i];
	
	for (int i = 0; i < n_score - 1; i++)
		cout << same_score[score[i] ]<< " ";
	cout << same_score[score[n_score - 1]];

	return 0;
}