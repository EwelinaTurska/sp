#include <stdio.h>

int main()
{
int a;
int b;
int i;
int wynik = 0;
printf("Podaj dwie liczby calkowite: \n");
scanf("%d %d", &a, &b);
if (a>b)
	for(i=a;i>=b;i--)
		wynik = wynik + i;
else
	for(i=b;i>=a; i--)
		wynik = wynik + i;
printf("Suma liczb pomiedzy %d i %d wynosi: %d\n", a, b, wynik);
return 0;
}
