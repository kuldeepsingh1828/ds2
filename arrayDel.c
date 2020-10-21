//1 5 8 3 9 2 
#include <stdio.h>
#include <stdlib.h>
int size,A[100],position=1,input;
void Delete(int position)
{
	if (position>size)
	{
		printf("INVALID...\n");
		return;
	}
	for (int i = position-1; i < size-1; ++i)
	{
		A[i] = A[i+1];
	}
	size--;
}
int main()
{
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
	while((c=='y' || c=='Y'))
	{
		if (size==0)
		{
			printf("UNDERFLOW...\n");
			return -2;
		}
		system("clear");
		printf("\n****************************** ARRAY DELETE ******************************\n");
		printf("\n\t\t\tBEG");
		printf("\n\t\t\tEND");
		printf("\n\t\t\tPOS");
		printf("\n\t\t\tinput :");
		scanf("%d",&input);
		switch(input)
		{
			case 1 : 
					 position=1;
					 Delete(position);
					 break;
			case 2 : 
					 position=size;
					 Delete(position);
					 break;
			case 3 : 
					 printf("enter position :\n");
					 scanf("%d",&position);
					 Delete(position);
					 break;
			default : printf("wrong input\n");
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