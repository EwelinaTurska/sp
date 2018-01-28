#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void komunikat(int czydobry) {
int j;
	if(czydobry==1) {
		j = (rand() % 3);
	switch(j) {
		case 1: printf("swietnie \n");
			break;
		case 2: printf("Dobra robota \n");
			break;
		default: printf("Zly wynik \n");
	}
	else {
	switch(j) {
		case 1: printf("Niedobrze \n");
			break;
		case 2: printf("Nastepnym razem pojdzie ci lepiej \n");
			break;
		default: printf("Zly wynik \n");}
		}
	}
}
int main() {
int x,y,i;
int wynik;
srand(time(NULL));
for(i=1; i<=5; i++) {
	x= (rand() % 10)+1; printf("x=%d ", x); printf("\n");
	y= (rand() % 10)+1; printf("y=%d\n", y);
 printf("Podaj wynik mnozenia x*y = ");
 scanf("%d", &wynik);
 if(wynik == x*y) 
	 komunikat(1);
 else
 komunikat(0);
}
return 0;
}
