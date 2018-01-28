#include <stdio.h>
#define TYG 7
int main()
{
int n;
int a;
int b;
printf("Podaj liczbe dni: \n");
scanf("%d", &n);

while(n>0){
	a = (n/TYG);
	b = (n%TYG);
  printf("%d tygodni, %d dni\n", a, b);
  printf("Podaj liczbe dni: \n");
  scanf("%d", &n);
 }
return 0;
}
