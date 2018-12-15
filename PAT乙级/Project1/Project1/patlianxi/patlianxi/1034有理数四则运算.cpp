#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>
using namespace std;

int gcd(int t1, int t2) {
	return t2 == 0 ? t1 : gcd(t2, t1 % t2);
}
class fenshu {
public:
	int zhengshu;
	int fenzi;
	int zfenzi;
	int fenmu;
public:
	fenshu() :zhengshu(0), fenzi(0), zfenzi(0), fenmu(0) {}
	fenshu(int qzheng, int qfenzi, int qfenmu,int qzfenzi=0) :zhengshu(qzheng), fenzi(qfenzi),
		fenmu(qfenmu),zfenzi(qzfenzi) {	}
	//标准形式
	fenshu standard() {
		int gcdfz_fm = gcd(fenmu, fenzi);
		if (gcdfz_fm != 0) {
		fenzi /= gcdfz_fm;
		fenmu /= gcdfz_fm;
		}
		zhengshu += fenzi / fenmu; //整数部分
		zfenzi = fenzi - zhengshu * fenmu; //真分子
		return fenshu(zhengshu, fenzi, fenmu, zfenzi);
	}
	//输出标准形式
	void print_fs();
	fenshu operator+(fenshu b) {
		int r_fenzi = fenzi * b.fenmu + b.fenzi*fenmu;
		int r_fenmu = fenmu * b.fenmu;
		return fenshu(0,r_fenzi,r_fenmu,0);
	}
	fenshu operator-(fenshu b) {
		b.fenzi *= -1;
		return *this + b;
	}
	fenshu operator*(fenshu b) {
		int ji_fz = fenzi * b.fenzi;
		int gfm = fenmu * b.fenmu;
		return fenshu(0, ji_fz, gfm, 0);
	}
	fenshu operator/(fenshu b) {
		if (b.fenzi == 0) {
			cout << "Inf";
			return fenshu(1, -1, -1,-1);
		}
		else {
			fenshu t = fenshu(b.zhengshu, b.fenmu, b.fenzi);
			return (*this *t);
		}
	}
};

void fenshu::print_fs() {
	if (zhengshu > 0) {
		if (zfenzi > 0)
			printf("%d %d/%d", zhengshu, zfenzi ,fenmu);
		if(zfenzi ==0)
			printf("%d", zhengshu);
	}
	if (zhengshu < 0) {
		if (zfenzi > 0)
			printf("(%d %d/%d)", zhengshu, zfenzi, fenmu);
		if(zfenzi==0)
			printf("(%d)", zhengshu);
		if (zfenzi < 0)
			printf("(%d %d/%d)", zhengshu, abs(zfenzi), fenmu);
	}
	if(zhengshu==0) {
		if (zfenzi > 0 )
			printf("%d/%d", zfenzi, fenmu);
		if(zfenzi <0)
			printf("(%d/%d)", zfenzi, (fenmu));
		if(zfenzi==0)
			printf("0");
	}
}

int main()
{
	fenshu a, b;
	scanf("%d/%d %d/%d", &a.fenzi, &a.fenmu, &b.fenzi, &b.fenmu);
	a.standard();
	b.standard();
	a.print_fs(); cout << " + "; b.print_fs(); cout << " = "; (a + b).standard().print_fs(); cout << endl;
	a.print_fs(); cout << " - "; b.print_fs(); cout << " = "; (a - b).standard().print_fs(); cout << endl;
	a.print_fs(); cout << " * "; b.print_fs(); cout << " = "; (a * b).standard().print_fs(); cout << endl;
	a.print_fs(); cout << " / "; b.print_fs(); cout << " = "; (a / b).standard().print_fs(); cout << endl;
	return 0;
}
