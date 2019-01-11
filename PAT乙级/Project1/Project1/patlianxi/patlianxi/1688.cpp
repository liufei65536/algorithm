#define _CRT_SECURE_NO_WARNINGS
	 
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int m, n, tol;
vector<vector<int>> v;
int dir[8][2] = { {-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1} };
bool judge(int i, int j) {
	for (int k = 0; k < 8; k++) {
		int tx = i + dir[k][0];
		int ty = j + dir[k][1];
		if (tx >= 0 && tx < n && ty >= 0 && ty < m && v[i][j] - v[tx][ty] >= 0 - tol && v[i][j] - v[tx][ty] <= tol) return false;
	}
	return true;
}
int main() {
	int cnt = 0, x = 0, y = 0;
	scanf("%d%d%d", &m, &n, &tol);
	v.resize(n, vector<int>(m));
	map<int, int> mapp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &v[i][j]);
			mapp[v[i][j]]++;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mapp[v[i][j]] == 1 && judge(i, j) == true) {
				cnt++;
				x = i + 1;
				y = j + 1;
			}
		}
	}
	if (cnt == 1)
		printf("(%d, %d): %d", y, x, v[x - 1][y - 1]);
	else if (cnt == 0)
		printf("Not Exist");
	else
		printf("Not Unique");
	return 0;
}
/*
#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
	struct Point {
		int x; 
		int y;
		int color;
	};
	int m, n, tol;
	cin >> m >> n >> tol;
	vector<vector<int>> v;
	v.resize(n, vector<int>(m));
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
		}
	}

	Point PointF[10001];
	int cnt = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i !=0 && j != 0 && i !=m - 1 && j!= n - 1) { //²»ÔÚ±ßÔµ
				bool judge = true;
				for (int a = i - 1; a < i + 1; a++) {
					for (int b = j - 1; j < j + 1; j++) {
						if (abs(v[a][b] - v[i][j]) <= tol)
							judge = false;
					}
				}
				if (judge)
					PointF[cnt++] = { i, j, v[i][j] };
			}
		}
	}
	Point P[10001];
	int cnt2 = 0;
	for (int k = 0; k < cnt; k++) {
		bool judge = true;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (v[i][j] == PointF[k].color && (i!= PointF[k].x||j!=PointF[k].y)) {
					judge = false;
				}
			}
		}
		if (judge) {
			P[cnt2++] = PointF[k];
		}
	}
	if (cnt2 == 0) {
		cout << "Not Exist";
	}
	else if (cnt2 == 1) {
		printf("(%d, %d): %d", P[0].x, P[0].y, P[0].color);
	}
	else {
		cout << "Not Unique";
	}
	return 0;
}
*/