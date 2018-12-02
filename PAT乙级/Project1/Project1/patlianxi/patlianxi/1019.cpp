#include<stdio.h>
#include<algorithm>
int splitN(int N, int*a) {
	a[0] = N / 1000;
	a[1] = (N / 100) % 10;
	a[2] = (N / 10) % 10;
	a[3] = N % 10;
}
int main()
{
	int  N;
	scanf("%d",&N);
	int a[4];
	int x = 0, y = 0;
	int result = -1;
	splitN(N, a);
	do {
		std::sort(a, a + 4);
		y = (a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3]);
		x = (a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0]);
		result = x - y;
		printf("%04d - %04d = %04d\n", x, y, result);
		splitN(result, a);
	} while (result != 6174 && result != 0);
	return 0;
}

