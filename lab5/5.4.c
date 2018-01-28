#include <stdio.h>
void liczba(int x);
int main() {
	int x;
	printf("Podaj liczbe calkowita: \n");
	scanf("%d", &x);
	liczba(x);
	return 0;
	}
void liczba(int x) {
	int i;
	int wynik;
	
	for (x; x != 0; x=x/10) {
		wynik = x%10;
		printf("%d\n", wynik);
		}
	}
