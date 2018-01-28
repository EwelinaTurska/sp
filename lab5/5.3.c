#include <stdio.h>
int liczba_doskonala (int n);
int main () {
int n;
int i;
int wynik = 0;
printf("Podaj liczbe calkowita: ");
scanf("%d", &n);
for(i=1; i<n; i++) {
	if (n%i == 0)
		wynik = (wynik + i);}
	if (wynik == n)
		printf("Liczba jest doskonała\n");
		else
		printf("Liczba nie jest doskonała\n");
return 0;	
}

