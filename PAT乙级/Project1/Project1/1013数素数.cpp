#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int n);
int main()
{
	int m,n;
	cin >> m >> n;
	int cnt = 1;
	int *primes = new int[n+2];
	for (int i = 1; cnt <= n; i++) {
		if (isPrime(i)) {
			primes[cnt] = i;
			cnt++;
		}
	}
	int flag_change_line=0;
	for (int j = m; j <= n; j++) {
		cout << primes[j];
		flag_change_line++;
		if (flag_change_line % 10 == 0)
			cout << "\n";
		else if(j!= n )
			cout << " ";
	}
		//2,3,5,7,11
	delete primes;
	return 0;
}


bool isPrime(int n) {
	if (n == 1)
		return false;
	if (n == 2)
		return true;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n%i == 0)
			return false;
	}
	return true;
}