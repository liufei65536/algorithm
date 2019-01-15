#include<iostream>
using namespace std;
int main()
{
	int T, K;
	cin >> T >> K;
	int n1, b, t, n2;
	for (int i = 0; i < K; i++) {
		cin >> n1 >> b >> t >> n2;
		if (t > T) {
			printf("Not enough tokens.  Total = %d.\n", T);
		}
		else {
			if ((b == 0 && n2 < n1) || (b == 1 && n2 > n1)) {
				T += t;
				printf("Win %d!  Total = %d.\n", t, T);
			}
			else {
				T -= t;
				printf("Lose %d.  Total = %d.\n", t, T);
				if (T == 0) {
					printf("Game Over.\n");
					break;
				}
			}
		}
	}
	return 0;
}