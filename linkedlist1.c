#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node *next;
}*start;
int main()
{
	start = NULL;
	struct Node *n1,*n2,*n3,*n4,*n5;
	n1 = malloc(sizeof(struct Node));
	n2 = malloc(sizeof(struct Node));
	n3 = malloc(sizeof(struct Node));
	n4 = malloc(sizeof(struct Node));
	n5 = malloc(sizeof(struct Node));
	if (n1==NULL)
	{
		printf("Memory NOT allocated!\n");
		return -1;
	}
	n1->data=10; n1->next=n2;
	n2->data=20; n2->next=n3;
	n3->data=30; n3->next=n4;
	n4->data=40; n4->next=n5;
	n5->data=50; n5->next=NULL;
	start = n1;
}


	n1		n2		n3		n4		n5
	10		20		30		40		50
	n2		n3		n4		n5		NULL
	