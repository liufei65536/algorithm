#include<iostream>
#include<string>
using namespace std;
bool ise(int* a, int m, int t) {
	for (int i = 0; i < m; i++) {
		if (a[i] == t)
			return true;
	}
	return false;
}
int main()
{
	int n, m;
	int n_q = 0, m_q = 0;
	cin >> n >> m;
	int *a = new int[m];
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	string name;
	int k;
	int t;

	for (int i = 0; i < n; i++) {
		bool flag = false;
		cin >> name>>k;
		for (int j = 0; j < k; j++) {
			cin >> t;
			if (ise(a, m, t) && !flag) {
				cout << name << ": ";
				printf("%04d", t);
				n_q++;
				m_q++;
				flag = true;
			}
			else if (ise(a, m, t) && flag) {
				printf(" %04d", t);
				m_q++;
			}
		}
		if (flag == true)
			cout << endl;

	}
	cout << n_q << " "<<m_q;
	return 0;
}