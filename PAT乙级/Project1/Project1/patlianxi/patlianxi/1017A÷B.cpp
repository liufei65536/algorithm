//����(1000λ)������ʹ���ַ���ģ���ֶ�����
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string A;		//������A
	int B, Q, tmp; //����B����Q
	cin >> A >> B;
	int len = A.length();

	Q = (A[0] - '0') / B;//��1λ
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
