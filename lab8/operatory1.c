#include <stdio.h>
#define GODZINA 60
int main()
{
int n;
printf("Podaj liczbe minut: \n");
scanf("%d", &n);
/*int a = (n/GODZINA);
int b = (n%GODZINA);*/
int a = 0;
int b = n;
while (b>=GODZINA){
  b = b-GODZINA;
  a++;
}
printf("%d godzin, %d minut\n", a, b);
return 0;
}
