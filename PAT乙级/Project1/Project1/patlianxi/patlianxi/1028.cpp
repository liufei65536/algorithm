#include<iostream>
#include<string>
using namespace std;
class birth {
public:
	int year;
	int month;
	int day;
	bool isbirth() {
		return ((year < 2014 || (year == 2014 && month < 9) || (year == 2014 && month == 9 && day <= 6)) &&
			(year > 1814 || (year == 1814 && month > 9) || (year == 1814 && month == 9 && day >= 6)));
	}
	bool operator>(birth b2) {
		return  (year > b2.year || (year == b2.year && month > b2.month) || (year == b2.year && month == b2.month && day > b2.day));
	}
};
class person {
public:
	birth birthday;
	string name;
};
int main()
{
	int N;
	person young;
	person old;
	int count=0;
	cin >> N;
	person tmp;
	for (int i = 0; i < N; i++) {
		cin >> tmp.name;
		scanf_s("%d/%d/%d", &tmp.birthday.year, &tmp.birthday.month, &tmp.birthday.day);
		if (tmp.birthday.isbirth()) {
			if (count == 0) {
				old = tmp;
				young = tmp;
			}
			count++;
			if (tmp.birthday > old.birthday)
				old = tmp;
			if (young.birthday > tmp.birthday ) 
				young= tmp;
		}
	}
	cout << count;
	if (count != 0) {
		cout << " " << young.name << " " << old.name;
	}
	return 0;
}