//1016部分A+B
#include<iostream>
using namespace std;
//传入A,DA,cDA,得到A中DA出现的次数存到cDA中
void countc(int A, int Da, int & cDa);
//传入DA,cDA,返回PA的值
int calcuP(int Da, int cDa);
int main()
{
	int A, DA, B, DB;
	int cDA = 0, cDB = 0;
	cin >> A >> DA >> B >> DB;
	int PA = 0, PB = 0;
	countc(A, DA, cDA);
	countc(B, DB, cDB);
	PA = calcuP(DA, cDA);
	PB = calcuP(DB, cDB);
	cout << PA + PB;
	return 0;
}

void countc(int A, int Da, int & cDa)
{
	while (A != 0) {
		int tm = A % 10;
		if (tm == Da) {
			cDa++;
		}
		A /= 10;
	}
}

int calcuP(int Da, int cDa) {
	if (Da == 0 || cDa == 0)
		return 0;
	int P = 0;
	for (int i = 0; i < cDa; i++) {
		P += Da;
		Da *= 10;
	}
	return P;
}