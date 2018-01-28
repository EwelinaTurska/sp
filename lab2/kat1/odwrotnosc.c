#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;

		printf("Podaj liczbe a: \n");
		scanf("%lf", &a);
		if (a == 0)
			printf("Nie ma liczby odwrotnej\n");
		else {
		c = 1/a;
		printf("liczba odwrotna do a to: %lf\n",c);}
		b = sqrt(a);
		if (a>=0)
			printf("Pierwiastek kwadratowy z a wynosi: %lf\n",b);
		else 
			printf("Pierwiastek nie jest liczba rzeczywista\n");
	
	
return 0;
}
