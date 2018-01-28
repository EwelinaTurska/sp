#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void zgadywanie(int liczba) {
	int odp;
	do {
		printf("Jaka to liczba?");
		scanf("%d", &odp);
		if(odp==liczba)
			printf("Zgadles!\n");
		else
			if(odp>liczba)
				printf("Za duzo \n");
			else
				printf("Za malo \n");
	}
	while (odp != liczba);
}
int main() 
{
	int x;
	srand(time(NULL));
	x = (rand() % 1000)+1;
	zgadywanie(x);
return 0;
}
