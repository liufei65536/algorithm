#include<iostream>
using namespace std;
int main()
{
	char ch;
	int column;//ÁÐ
	cin >> column >> ch;
	int row = (int)(0.5*column+0.5) ;//ÐÐ
	for (int i = 0; i < column; i++)
		cout << ch;
	cout << endl;
	for (int i = 0; i < row - 2; i++) {
		cout << ch;
		for (int j = 0; j < column - 2; j++)
			cout << " ";
		cout << ch << endl;
	}
	for (int i = 0; i < column; i++)
		cout << ch;
	cout << endl;
	return 0;
}