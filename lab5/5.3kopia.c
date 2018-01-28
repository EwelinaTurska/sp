#include <stdio.h>
int liczba_doskonala (int n);
int main () {
int n;
int i;
int m;
int wynik = 0;
printf("Podaj liczbe calkowita: ");
scanf("%d", &n);
if (n == 0)
	printf("Liczba nie jest doskonala\n");
	else{
	wynik = liczba_doskonala (n);

	if (wynik == n)
		printf("Liczba jest doskonała\n");
		else
		printf("Liczba nie jest doskonała\n");}
	for (m=1; m<10000; m++){
		wynik = liczba_doskonala(m);
		if (wynik == m)
			printf("%d\n", m);}
	
return 0;	
}
int liczba_doskonala (int n) {
	int i;
	int wynik = 0;
	for(i=1; i<n; i++) {
	if (n%i == 0)
		wynik = (wynik + i);}
	return wynik;
}
