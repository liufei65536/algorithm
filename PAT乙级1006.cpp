#include<iostream>
using namespace std;
int main()
{ 
	int x;
	int n[3] = { 0,0,0 };
	cin >> x;
	for (int i = 0; i < 3; i++) {
		n[i] = x % 10;
		x /= 10;;
	}
	for (int i = 2; i >= 0; i--) {
		for(int j=1; j<=n[i]; j++) {
			switch (i){
			case 2:cout << 'B'; break;
			case 1:cout << 'S'; break;
			case 0:cout << j; break;
		}

		}
	}
	return 0;
}