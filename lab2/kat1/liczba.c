/* Program ten dla dwóch liczb wczytanych z klawiatury
   wypisuje, która z nich jest większa. */
#include <stdio.h>
int main()
{
   int licz1, licz2 ;

   printf("Podaj pierwsza liczbe: ");
   scanf("%d", &licz1);
   printf("Podaj druga liczbe: ");
   scanf("%d", &licz2);
	if(licz1>licz2)
		printf("Wieksza jest liczba pierwsza\n");
	  else
		printf("Wieksza jest liczba druga\n");	
   return 0;
}
