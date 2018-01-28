#include <stdio.h>
void strzalka(int h) {
	int i,j,k;
	k=(h/2)*2-1;
	for(i=1; i<=h; i++) {
		if (i<=h/2) {for (j=1; j<=(k/2-i+1); j++) putchar(' ');
			for(j=1; j<=(2*i-1); j++) putchar('*');}
		else {for(j=1; j<=k/2; j++) putchar(' '); putchar('*');}
		putchar('\n');
	}
}
int main()
{
int wysokosc;
printf("Podaj wysokosc strzalki \n");
scanf("%d", &wysokosc);
strzalka(wysokosc);
return 0;
}
