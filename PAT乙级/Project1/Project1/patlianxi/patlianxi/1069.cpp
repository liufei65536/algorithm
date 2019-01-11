#include<iostream>
#include<string>
#include<set>
using namespace std;
int main()
{
	int m, n, s;
	cin >> m >> n >> s;
	string name[1001];
	set<string> reward;
	for (int i = 1; i <=m; i++) {
		cin >> name[i];
	}
	string rewards[1001];
	int n_reward = 0;
	int count = 0;
	if (s > m)
		cout << "Keep going...";
	else {
		for (int i = s; i <= m; i++) {
			if ( reward.find(name[i]) != reward.end()) {
				continue;
			}

			if (count % n == 0) {
				if (i == s || reward.find(name[i]) == reward.end()) {
					reward.insert(name[i]);
					rewards[n_reward++] = name[i];
				}
			}
			count++;
		}
		for (int i = 0; i < n_reward; i++) {
			cout << rewards[i] << endl;
		}
	}
	return 0;
}