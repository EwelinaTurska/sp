#include <stdio.h>
#include <math.h>
double przeciwprostokatna (double bok1, double bok2);
int main();
 {
	double bok1;
	double bok2;
	double wynik;
	printf("Podaj dlugosc przyprostokatnych:  ");
	scanf("%lf" "%lf", &bok1, &bok2);
	printf("przeciwprostokatna ma dlugosc:%lf", wynik);
	
	return 0;	
 }
	double przeciwprostokatna(bok1, bok2) {
	double wynik;
	wynik = sqrt(bok1*bok1 + bok2*bok2);
	return wynik;
	}
