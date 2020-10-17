#include <stdio.h>
int size = 6;
int main()
{
	int A[10] = {4,6,1,3,8,5};
	for (int i = 0; i < size ; ++i)
	{
		printf("%d ",A[i] );
	}
	char c  = 'y';
	int n;
	while(c=='y' || c=='Y')
	{
		printf("\nEnter new element  : \n");
		scanf("%d",&n);
		if (size<10)
		{
			A[size]  = n;
			size++;
		}
		else
		{
			printf("OVERFLOW!\n");
			return -2;
		}
		for (int i = 0; i < size ; ++i)
		{
			printf("%d ",A[i] );
		}
		printf("\nMore ?\n");
		fflush(stdin);
		scanf("%c",&c);
	}
}