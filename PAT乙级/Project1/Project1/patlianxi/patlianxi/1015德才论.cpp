#include<iostream>
using namespace std;
struct student {
	int number;
	int de;
	int cai;
};
void swap(student & one, student & two);
void sort(student* stu, int n);
void printstu(student* stu, int n);
int main()
{
	int N, L, H;
	cin >> N >> L >> H;
	student stu[100000];
	int M = 0;
	student stuM[100000];
	int n_stu1 = 0, n_stu2 = 0, n_stu3 = 0,n_stu4=0;
	for (int i = 0; i < N; i++) {
		cin >> stu[i].number >> stu[i].de >> stu[i].cai;
		if (stu[i].de >= 60 && stu[i].cai >= 60) {
			stuM[M] = stu[i];
			M++;
		}
	}
	cout << M << endl;
	student *stu1 = new student[M];
	student *stu2 = new student[M];
	student *stu3 = new student[M];
	student *stu4 = new student[M];

	//·ÖËÄÀà
	for (int j = 0; j < M; j++) {
		if (stuM[j].cai >= H && stuM[j].de >= H) 
			stu1[n_stu1++] = stuM[j];
		if (stuM[j].cai < H && stuM[j].de >= H)
			stu2[n_stu2++] = stuM[j];
		if (stuM[j].cai < H && stuM[j].cai < H
			&& stuM[j].de >= stuM[j].cai)
			stu3[n_stu3++] = stuM[j];
		else
			stu4[n_stu4++] = stuM[j];
	}
	sort(stu1, n_stu1);
	sort(stu2, n_stu2);
	sort(stu3, n_stu3);
	sort(stu4, n_stu4);
	printstu(stu1, n_stu1);
	printstu(stu2, n_stu2);
	printstu(stu3, n_stu3);
	printstu(stu4, n_stu4);
	delete stu1;
	delete stu2;
	delete stu3;
	delete stu4;
	system("pause");
	return 0;
}
void swap(student & one, student & two) {
	student tmp = one;
	one = two;
	two = tmp;
}
void sort(student* stu, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n -1- i; j++) {
			if ((stu[j].de + stu[j].cai < stu[j + 1].de + stu[j + 1].cai)
				|| ((stu[j].de + stu[j].cai == stu[j + 1].de + stu[j + 1].cai) && stu[j].number < stu[j + 1].number)
				)
				swap(stu[j], stu[j + 1]);
		}
	}
}
void printstu(student* stu, int n) {
	for (int i = 0; i < n; i++) {
		cout << stu[i].number << " " << stu[i].de << " " << stu[i].cai << endl;
	}
}