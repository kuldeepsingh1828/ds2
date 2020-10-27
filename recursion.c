#include <stdio.h>
void table(int n);
int main()
{
	table(1);
}
void table(int n)
{
	if (n>=10)
	{
		return;
	}
	printf("5 X %d = %d\n", n,5*n);
	table(++n);
}