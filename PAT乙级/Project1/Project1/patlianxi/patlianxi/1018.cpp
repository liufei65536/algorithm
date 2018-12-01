#include<iostream>
using namespace std;
struct play
{
	int win;
	int lose;
	int tie;
};
char cc(int ab, int ac, int aj);
int main()
{
	int n;
	cin >> n;
	play A = { 0,0,0 };
	play B = { 0,0,0 };
	char player1, player2;
	int ab = 0, aj = 0, ac = 0;
	int bb = 0, bj = 0, bc = 0;
	for (int i = 0; i < n; i++) {
		cin >> player1>>player2;
		if (player1 == player2) {
			A.tie++;
			B.tie++;
		}
		else if (player1 == 'C' && player2 == 'J' ||
			player1 == 'J' && player2 == 'B' ||
			player1 == 'B' && player2 == 'C') {
			A.win++;
			player1 == 'C' ? (ac++) : (player1 == 'B' ? (ab++) : (aj++));
			B.lose++;
		}
		else {
			A.lose++;
			(player2 == 'C') ? (bc++) : (player2 == 'B' ? (bb++) : (bj++));
			B.win++;
		}
	}

	cout <<A.win<< " "<<A.tie << " "<<A.lose<<endl;
	cout <<B.win << " "<<B.tie<< " "<<B.lose<<endl;
	cout << cc(ab,ac,aj)<<" "<<cc(bb,bc,bj);
	return 0;
}
char cc(int ab, int ac, int aj) {
	if (ab >= ac && ab >= aj) {
		return 'B';
	}
	if (ac > ab && ac >= aj) {
		return 'C';
	}
	if (aj > ac && aj > ab) {
		return 'J';
	}
}