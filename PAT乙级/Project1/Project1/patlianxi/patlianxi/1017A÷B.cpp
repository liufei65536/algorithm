//大数(1000位)除法，使用字符串模拟手动除法
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string A;		//被除数A
	int B, Q, tmp; //除数B，商Q
	cin >> A >> B;
	int len = A.length();

	Q = (A[0] - '0') / B;//第1位
	if ((Q != 0 && len > 1) || len == 1)
		cout << Q;
	tmp = (A[0] - '0') % B;
	for (int i = 1; i < len; i++) {
		Q = ((A[i] - '0') + tmp * 10) / B;
		cout << Q;
		tmp = (tmp * 10 + A[i] - '0')%B;
	}
	cout <<" "<< tmp;
	return 0;
}
