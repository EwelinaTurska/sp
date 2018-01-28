#include <stdio.h>
int roznica(int *tab) {
int x;
int max = tab[0]; // max= *tab
int min = tab[0];
int i=0;

	for(i; i<9; i++)
		if(tab[i]> max)
			max = tab[i];
	printf("Najwieksza wartosc to:%d\n", max);
	for(i; i<9; i++)
		if(tab[i]< min)
			min = tab[i];
	printf("Najmniejsza wartosc to:%d\n", min);
	x = max - min;
	printf("Roznica miedzy elementem najwiekszym i najmniejszym wynosi:%d\n", x);
return 0;
}

int main() {
int i;
int tab[]= {8, 6, 3, 1, 5, 6, 7, 11, 2};
	
	roznica(tab);
return 0;
}
