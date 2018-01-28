#include <stdio.h>

void wpisz_wartosc_128(int *tab) {
int j;
	for(j=0; j<512; j++){
		*(tab+j) = 128;
		}
}


int main() {
int tab[512];
int i;
wpisz_wartosc_128(tab);
for (i=0;i<512;i++)
	printf("tab[%d]=%d\n",i, tab[i]);
return 0;
}
