#include<stdio.h>
int main()
{
int i, wynik;
double tab[6];
printf("Podaj 6 liczb rzeczywistych: \n");
for(i=0;i<6;i++)
scanf("%lf", &tab[i]);
wynik = 0;
for(i = 0; i<6 ;i++)
{
	if(tab[i]>0)
	
	{
		wynik = wynik + 1;
	}
}
printf("Liczb dodatnich jest: %d \n", wynik);
return 0;
}
