#include <stdio.h>
int main()
{
	int size = 5;
	int n,pos;
	char c ='y';
	int A[10]={45, 78, 90, 23, 41};
	printf("The Array is : \n");
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", A[i]);
	}
	while(c=='y' || c=='Y')
	{
		if (size==10)
		{
			printf("OVERFLOW...\n");
			return -2;
		}
		printf("\nEnter new element : \n");
		scanf("%d",&n);
		printf("\nEnter position : \n");
		scanf("%d",&pos);
		if (pos>size)
		{
			printf("CANNOT PERFORM....\n");
			return -2;
		}
		for (int i = size; i > pos-1; --i)
		{
			A[i] = A[i-1];
		}

		A[pos-1] = n;
		size++;
		printf("\nThe Array is : \n");
		for (int i = 0; i < size; ++i)
		{
			printf("%d ", A[i]);
		}
		printf("\nMore ?\n");
		fflush(stdin);
		scanf("%c",&c);
	}
}