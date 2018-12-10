#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
	char M[11] = { '1','0','X','9','8','7','6','5','4','3','2' };
	int quan[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	int N;
	cin >> N;
	string sfz[100];
	for (int i = 0; i < N; i++)
		cin >> sfz[i];

	string wrong[100];
	int n_wrong = 0;
	bool iswrong = false;
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum = 0;
		for (int j = 0; j < 17; j++) {
			if (!isdigit(sfz[i][j])) {
				iswrong = true;
				break;
			}
			sum += (sfz[i][j] - '0') * quan[j];  //这个地方不要忘记-'0'
		}
		int Z = sum % 11;
		if (sfz[i][17] != M[Z])
			iswrong = true;
		if (iswrong) {
			wrong[n_wrong++] = sfz[i];
			iswrong = false;
		}
	}
	for (int i = 0; i < n_wrong; i++)
		cout << wrong[i] << endl;
	if (n_wrong == 0)
		cout << "All passed";
	return 0;
}