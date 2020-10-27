#include <stdio.h>
int main()
{ 
	int Marks[][4] =
	{
		{89,90,67,78},
		{59,92,65,87},
		{99,70,60,71},
		{49,89,97,78},
		{99,50,75,78}
	};
	int sum = 0;
	float percentage[5];


	for (int i = 0; i < 5; ++i)
		{
			sum = 0;
			for (int j = 0; j < 4; ++j)
			{
				printf("%d\t",Marks[i][j]);
				sum+=Marks[i][j];
			}
			percentage[i] = sum/4.0;
			printf("\nThe percentage is : %f\n",percentage[i]);
			printf("\n");
		}
		return 45.56;	
}



/*

Names			Maths		English		Hindi		Physics

Abhishek		89			90			67			78

chetan			89			90			67			78

Deepanshu		89			90			67			78

Devansh			89			90			67			78

Kritika			89			90			67			78
*/