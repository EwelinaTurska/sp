#include<stdio.h>
int main()
{
int i, j;
for(i=0;i<4; i++)
	{
	for(j=0;j<=i;j++)
		putchar('*');
	printf("\n");
	}
for(i=0;i<4; i++)
	{
	for(j=4;j>i;j--)
		putchar('*');
	printf("\n");
	}
for(i=0;i<4; i++)
	{
	for(j=0;j<=i;j++)
		putchar(' ');
	for(j=4;j>i;j--)
		putchar('*');
	printf("\n");
	}
for(i=0;i<4; i++)
	{
	for(j=4;j>i;j--)
		putchar(' ');
	for(j=0;j<=i;j++)
		putchar('*');
	printf("\n");
	}

return 0;
}
