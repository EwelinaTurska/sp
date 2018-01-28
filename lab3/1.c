#include<stdio.h>
int main()
{
int a = 1, i;
for(i = 1; a <= 2010; i++)
	{
	printf("%d\n", a);
	a = 2*a; 
	}
return 0;
}
