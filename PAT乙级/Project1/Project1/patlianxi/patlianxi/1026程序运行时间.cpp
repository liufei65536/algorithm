#include<iostream>
#include<time.h>
#include<Windows.h>
using namespace std;
void show_time(double time);
int main()
{
	cout << "开始：\n";
	clock_t C1 = clock();
	//Start Test
	Sleep(5*1000); //测试用例，实际使用时换成自己的功能。
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
	printf("用时%02d:%02d:%02d", hh, mm, ss);
}