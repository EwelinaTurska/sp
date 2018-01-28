#include <stdio.h>

void prostokat(int s, int w) {
int i;
int j;
 for(i=1; i<=w; i++) {
	if ((i==1) || (i==w))
		for(j=1; j<=s; j++)
			putchar('*');
	else{
		putchar('*');
		for(j=1; j<=s-2; j++)
			putchar(' '); putchar('*');}
	putchar('\n');
 }
}
int main()
{
int s;
int w;
int i;
int j;
printf("Podaj szerokosc prostokata \n");
scanf("%d", &s);
printf("Podaj wysokosc prostokata: \n");
scanf("%d", &w);
prostokat(int s, int w);
return 0;
}
