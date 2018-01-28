#include<stdio.h>
int main()
{
int i;
double wynik;
double tab[6];
printf("Podaj 6 liczb rzeczywistych: \n");
for(i=0;i<6;i++)
scanf("%lf", &tab[i]);
wynik = tab[0];
for(i = 0; i<6 ;i++)
{
		if(wynik < tab[i])
		{
			wynik = tab[i];
		}
}
printf("Największy element tablicy to: %lf\n", wynik);
for(i = 0; i<6 ;i++)
{
		if(wynik > tab[i])
		{
			wynik = tab[i];
		}
}
printf("Najmniejszy element tablicy to: %lf \n", wynik);
return 0;
}
