#include <stdio.h>
#include <math.h>

int main()
{
	double a, b;

		printf("Podaj liczbe a: \n");
		scanf("%lf", &a);
		b = sqrt(a);
		if (a>=0)
			printf("Pierwiastek kwadratowy z a wynosi: %lf\n",b);
		else 
			printf("Operacja niemożliwa\n");
	
	
return 0;
}
