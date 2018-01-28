#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
int x,y,i, iledobrych=0;
int wynik;
srand(time(NULL));
for(i=1; i<=5; i++) {
	x= (rand() % 10)+1; printf("x=%d ", x); printf("\n");
	y= (rand() % 10)+1; printf("y=%d\n", y);
 printf("Podaj wynik mnozenia x*y = ");
 scanf("%d", &wynik);
 if(wynik == x*y) {
	 printf("Super\n"); iledobrych++;} 
 else printf ("Zla odpowiedz \n");
 }
printf("Liczba dobrych odpowiedzi to: %d \n", iledobrych);
//x= (rand() % 4)+2;
//printf("x=%d\n",x);
//switch(x) {
//     case 5 : printf("Excellent!\n" );
//         break;
//     case 4 : printf("Well done\n" );
//         break;
//     case 3 : printf("You passed\n" );
//         break;
//     case 2 : printf("Better try again\n" );
//         break;
//     default : printf("Invalid grade\n" );
//  }
return 0;
}
