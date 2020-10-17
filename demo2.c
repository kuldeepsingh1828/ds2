#include <stdio.h>
int main()
{
	int A[5]; //declaration of array
	A[0] = 1; // intialization of array
	A[1] = 2;
	A[2] = 3;
	A[3] = 4;
	A[4] = 5;
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n",A[i]);
	}
	printf("\n");
}