#include<iostream>
#include<math.h>
using namespace std;
void toD(int S, int D);
string mars[13] = { "tret","jan", "feb", "mar", "apr", "may", "jun", "jly",
"aug", "sep", "oct", "nov", "dec" };
int main()
{
	int S ;
	cin >> S;
	int D = 13;
	toD(S, D);
	return 0;
}

/*
把十进制转换成D进制？
12-->2进制
2^3+2^2
1100
*/
void toD(int S,int D) {
	int maxP=0;
	for (int i = 0; i < 31; i++) {
		if (pow(D, i) <= S && pow(D,i+1)>S) {
			maxP = i;
			break;
		}
	}
	int *a = new int[maxP+1];
	for (int i = 0; i <= maxP; i++)
		a[i] = 0;
	int yu = S;
	for (int i = maxP; i >= 0; i--) {
		if (yu > 0) {
			for (int j = 0; j < D; j++) {
				if ((yu - j * pow(D, i) >= 0 && yu - (j + 1)* pow(D, i) < 0)) {
					a[i] = j;
					yu -= j * pow(D, i);
				}
			}
		}
	}
	for (int i = maxP; i >= 0; i--) {
		cout << a[i];
	}
}