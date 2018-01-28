#include<stdio.h>
int main()
{
int i;
//int a, b, c, d, e, f;
int tab[6];// = {a, b, c, d, e, f};
printf("Podaj 6 liczb całkowitych: \n");
for(i=0;i<6;i++)
scanf("%d", &tab[i]);
for(i=0;i<6;i++)
printf("%d ", tab[i]);
printf("\n");
for(i=5;i>=0;i--)
printf("%d ", tab[i]);
return 0;
}
