#include<iostream>
#include<string>
using namespace std;
struct Student
{
	string zkz;
	int kszw;
};
int main()
{
	Student s[1001];
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		string tmp_zkz;
		int tmp_sjzw;
		cin >> tmp_zkz >> tmp_sjzw;
		s[tmp_sjzw].zkz = tmp_zkz;
		cin >> s[tmp_sjzw].kszw;
	}
	int M; cin >> M;
	int sjzw_to_find[1001];
	for (int i = 0; i < M; i++)
		cin >> sjzw_to_find[i];
	for (int i = 0; i < M; i++)
		 cout<<s[sjzw_to_find[i]].zkz<<" "<<s[sjzw_to_find[i]].kszw<<endl;
	return 0;
}