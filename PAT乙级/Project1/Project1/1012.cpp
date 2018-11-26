#include<iostream>
using namespace std;
int main()
{
	int A1=0, A2=0, A3=0, A5=0 ;//A1，A2都容易考虑不全。特别是A2容易忽略正负数相加为0的情形
	int n=0;
	int flag = 1;
	int n_A2 = 0;
	int n_A4=0, sum_A4=0;
	int num;
	cin >> num;
	for(int i=0;i<num;i++) {
		cin >> n;
		if (n % 5 == 0)
		{
			if (n % 2 == 0)//7,8出错
				A1 += n;
		}
		else if (n % 5 == 1) {
			n_A2++;
			A2 += n * flag;
			flag *= -1;
		}
		else if (n % 5 == 2) {
			A3++;
		}
		else if (n % 5 == 3) {
			sum_A4 += n;
			n_A4++;
		}
		else {
			if (A5 < n)
				A5 = n;
		}
	}
	if (A1 == 0)
		cout << "N";
	else
		cout << A1;
	cout << " ";
	if (n_A2 == 0)//5，6出错
		cout << "N";
	else
		cout << A2;
	cout << " ";
	if (A3 == 0)
		cout << "N";
	else
		cout << A3;
	cout << " ";
	if (n_A4 == 0)
		cout << "N";
	else
		printf("%.1f",1.0*sum_A4/n_A4);
	cout << " ";
	if (A5 == 0)
		cout << "N";
	else
		cout << A5;

	return 0;
}