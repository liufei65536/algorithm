#include<iostream>
#include<string>
using namespace std;
int main()
{
	struct shot {
		string ID;
		int x;
		int y;
	};
	int n;
	cin >> n;
	shot t;
	cin >> t.ID >> t.x >> t.y;
	shot a = t, b = t;
	for (int i = 1; i < n; i++) {
		cin >> t.ID >> t.x >> t.y;
		if ((t.x*t.x + t.y*t.y) < (a.x*a.x + a.y*a.y))
			a = t;
		if ((t.x*t.x + t.y*t.y) > (b.x*b.x + b.y*b.y))
			b = t;
	}
	cout << a.ID << " " << b.ID;
	return 0;
}