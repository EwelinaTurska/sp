#include<stdio.h>

int main()
{
int a, b;
printf("Podaj dwie liczby calkowite a, b takie, że a<b: \n");
scanf("%d %d", &a, &b);
if(b <= a)
	printf("a powinno byc mniejsze od b!\n");
else {
int i;
for(i = a+1; i < b; i++)
	printf("%d\n", i);
}

return 0;
}
