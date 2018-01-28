#include <stdio.h>
int silnia (int n);
int main () {
	int n;
	printf("Podaj liczbe naturalna: \n");
	scanf("%d", &n);
	if (n == 0)
		printf("Silnia wynosi 1");
		else printf("Silnia wynosi: %d \n", silnia(n));
	return 0;
    }
int silnia (int n){
	int wynik = 1;
	int i;
	for(i=1; i<=n; i++)
		wynik = (wynik*i);
	return wynik;
	}
