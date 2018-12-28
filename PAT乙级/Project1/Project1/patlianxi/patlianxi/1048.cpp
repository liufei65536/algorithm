#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string A;
	string B;
	cin >> A >> B;
	string r = B;

	int min = A.length() < B.length() ? A.length() : B.length();
	reverse(A.begin(),A.end());	
	reverse(B.begin(), B.end());
	for (int i = 0; i <min ; i++) {
		if ((i + 1) % 2 == 0) { //Å¼Êý
			if (B[i] - A[i] >= 0)
				r[i] = B[i] - A[i] +'0';
			else
				r[i] = B[i] - A[i] + 10+'0';
		}
		else {        //ÆæÊý
			int t = (A[i] + B[i] - 2 * '0')%13;
			if (t < 10)
				r[i] = t + '0';
			if (t == 10)
				r[i] = 'J';
			if (t == 11)
				r[i] = 'Q';
			if (t == 12)
				r[i] = 'K';
		}
	}
	if (min == A.length()) {
		for (int i = A.length(); i < B.length(); i++)
			r[i] = B[i];
	}

	reverse(r.begin(), r.end());
	cout << r;
	return 0;
}