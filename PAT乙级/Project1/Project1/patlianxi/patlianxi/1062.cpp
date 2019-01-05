#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//最大公约数
int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}
int main() {
	//读入数据
	int n1, m1, n2, m2, k;
	scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
	// 若 n1/m1 > n2*m2,交换，保证 n1/m1 <= n2*m2
	if (n1 * m2 > n2 * m1) {
		swap(n1, n2);
		swap(m1, m2);
	}
	
	int num = 1;
	bool flag = false;
	while (n1 * k >= m1 * num) num++;
	while (n1 * k < m1 * num && m2 * num < n2 * k) {
		if (gcd(num, k) == 1) {
			printf("%s%d/%d", flag == true ? " " : "", num, k);
			flag = true;
		}
		num++;
	}
	
	return 0;
}