#include <stdio.h>
#include <math.h>

int main()

{
 int a, b, c, suma, iloczyn;
 printf("Wprowadz trzy liczby calkowite: a, b, c \n");
 scanf("%d %d %d", &a, &b, &c);
 suma = a + b + c;
 printf("Suma wynosi: %d\n", suma);

 iloczyn = a*b*c;
 printf("Iloczyn wynosi: %d\n", iloczyn);

 if (a > b && a > c)
	printf("Najwieksza liczba to: %d \n", a);

 if (b > a && b > c)
        printf("Najwieksza liczba to: %d \n", b);

 if (c > b && c > a)
        printf("Najwieksza liczba to: %d \n", c);
 
 if (a < b && a < c)
	printf("Najmniejsza liczba to: %d \n", a);
 if (b < a && b < c)
        printf("Najmniejsza liczba to: %d \n", b);
 if (c < b && c < a)
        printf("Najmniejsza liczba to: %d \n", c);

return 0;
}
