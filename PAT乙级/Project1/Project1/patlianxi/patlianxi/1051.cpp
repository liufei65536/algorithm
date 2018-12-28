#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double r1, p1, r2, p2;
	cin >> r1 >> p1 >> r2 >> p2;
	double r = r1 * r2;
	double p = p1 + p2;
	double A = r*cos(p);
	double B = r * sin(p);
	if (A + 0.005 >= 0 && A < 0)
		printf("0.00");
	else
		printf("%.2f", A);
	if (B >= 0)
		printf("+%.2fi", B);
	else if (B + 0.005 >= 0 && B < 0)
		printf("+0.00i");
	else
		printf("%.2fi", B);

	return 0;
}