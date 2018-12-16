#include<iostream>
const int GalleonToSickle = 17;
const int SickleToKunt = 29;
using namespace std;
int main()
{
	struct money {
		int Galleon;
		int Sickle;
		int Knut;
	};
	money P, A;
	bool changFlag = false;
	scanf("%d.%d.%d %d.%d.%d", &P.Galleon, &P.Sickle, &P.Knut,
		&A.Galleon, &A.Sickle, &A.Knut);
	money result;
	if (P.Galleon*GalleonToSickle*SickleToKunt + P.Sickle*SickleToKunt + P.Knut
		> A.Galleon*GalleonToSickle*SickleToKunt + A.Sickle*SickleToKunt + A.Knut)
	{	
		money T = A;
		A = P;
		P = T;
		changFlag = true;
	}
		
	if (A.Knut >= P.Knut)
		result.Knut = A.Knut - P.Knut;
	else {
		result.Knut = A.Knut+ SickleToKunt - P.Knut;
		A.Sickle--;
	}
	if (A.Sickle >= P.Sickle)
		result.Sickle = A.Sickle - P.Sickle;
	else {
		result.Sickle = A.Sickle + GalleonToSickle - P.Sickle;
		A.Galleon--;
	}
		result.Galleon = A.Galleon - P.Galleon;
		if(changFlag == false)
			printf("%d.%d.%d", result.Galleon, result.Sickle, result.Knut);
		else 
			printf("-%d.%d.%d", result.Galleon, result.Sickle, result.Knut);

	return 0;
}