#include<iostream>
#include<time.h>
#include<Windows.h>
using namespace std;
void show_time(double time);
int main()
{
	cout << "��ʼ��\n";
	clock_t C1 = clock();
	//Start Test
	Sleep(5*1000); //����������ʵ��ʹ��ʱ�����Լ��Ĺ��ܡ�
	//End 
	clock_t C2 = clock();
	double time = (C2 - C1)/CLK_TCK;
	show_time(time);
	return 0;
}
void show_time(double time) {
	int hh, mm, ss;
	hh = time / 3600;
	time -= hh * 3600;
	mm = time / 60;
	time -= mm * 60;
	ss = (int)(time + 0.5);
	printf("��ʱ%02d:%02d:%02d", hh, mm, ss);
}