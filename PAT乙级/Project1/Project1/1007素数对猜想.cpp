#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int n);
int main()
{
	int n;
	cin >> n;
	int primes[10000];
	int n_prime = 0;
	int d_prime = 0;
	for (int i = 0; i <= n; i++) {
		if (isPrime(i))
			primes[n_prime++] = i;
	}
	for (int i = 0; i < n_prime; i++) {
		if (primes[i + 1] - primes[i] == 2) {
			d_prime++;
		}
	}
	cout << d_prime;
	return 0;
}

bool isPrime(int n) {
	if (n == 2)
		return true;
	for (int i = 2; i <=sqrt(n); i++) {
		if ( n%i == 0)
			return false;
	}
	return true;
}