//1 5 8 3 9 2 
#include <stdio.h>
int main()
{
	int size,A[100];
	char c ='y';
	printf("enter size :\n");
	scanf("%d",&size);
	for (int i = 0; i < size; ++i)
	{
		scanf("%d",&A[i]);
	}
	printf("The array is :\n");
	for (int i = 0; i < size; ++i)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
	while(c=='y' || c=='Y')
	{
		for (int i = 0; i < size-1; ++i)
		{
			A[i]=A[i+1];
		}
		size--;	
		if (size==0)
		{
			printf("UNDERFLOW....\n");
			break;
		}
		printf("The array is :\n");
		for (int i = 0; i < size; ++i)
		{
			printf("%d ",A[i]);
		}
		printf("\nDo you want to delete more :\n");
		fflush(stdin);
		scanf("%c",&c);
	}
}