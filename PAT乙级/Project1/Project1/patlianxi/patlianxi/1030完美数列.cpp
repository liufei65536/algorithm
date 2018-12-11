#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int N;
	long long p;
	cin >> N >> p;
	vector<int> v(N);
	for (int i = 0; i < N; i++)
		cin >> v[i];

	sort(v.begin(), v.end());
	int result = 0, temp = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i + result; j < N; j++) {
			if (v[j] <= v[i] * p) {
				temp = j - i + 1;
				if (temp > result)
					result = temp;
			}
			else {
				break;
			}
		}
	}
	cout << result;

	return 0;
}