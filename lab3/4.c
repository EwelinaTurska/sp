#include<stdio.h>

int main()
{
int a, i, suma = 0 ;
printf("Podaj liczbe naturalna a: \n");
scanf("%d", &a);
for(i = 1; i <= a; i++)
	suma += i; //suma+=i
printf("Suma liczb od 1 do a wynosi: %d \n", suma);
return 0;	 
}
