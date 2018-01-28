#include <stdio.h>
#include <string.h>
void odwroc(char tab[], int poczatek, int koniec);
int main (){
char tab[1000];
int koniec;
int poczatek = 0;
int i;
printf("Podaj napis: \n");
koniec = (strlen(tab) - 1);
scanf("%c", &tab[0]);
i=0;
while (tab[i] != '.') {i++;
scanf("%c", &tab[i]);
}
odwroc(tab, poczatek, i-1);
for (poczatek; poczatek<i; poczatek++)
	printf("%c", tab[poczatek]);
return 0;
}
void odwroc(char tab[], int poczatek, int koniec) {
	if (poczatek<koniec) {
		char temp;
		temp = tab[poczatek];
		tab[poczatek] = tab[koniec];
		tab[koniec] = temp;
		odwroc(tab, (poczatek+1), (koniec-1));
		}
	
}
