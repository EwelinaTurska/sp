#include<stdio.h>
#include<math.h>
int main()
{double start_value, end_value, step;
printf("Podaj wartosc poczatkowa: \n");
scanf("%lf", &start_value);
printf("Podaj wartosc koncowa: \n");
scanf("%lf", &end_value);
printf("Podaj krok dla argumentu: \n");
scanf("%lf", &step);
double i;
for(i = start_value; i <= end_value; i = i + step)
	{
	printf("%.4lf %.4lf\n", i, sqrt(i));
	}
return 0;
}
