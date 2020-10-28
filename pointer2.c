#include <stdio.h>
int main()
{
	int *p = NULL; //NULL pointer

	if (1)
	{
		int a = 10;
		p = &a;
		printf("%d\n",*p); // pointer
	}
	printf("%d\n",*p); //dangling pointer
}