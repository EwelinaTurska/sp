#include <stdio.h>
int minimum(int tab[], int n) {
	if (n == 0)
		return tab[n];
	else
	if(tab[n]>minimum(tab, n-1))
		return minimum(tab,n-1);
		else
		return tab[n];
		
}


int main () {
int tab[5] = {2,4,7,3,5};
int n;
//for(n=0; n<5; n++)
printf("%d \n", minimum(tab,4));
return 0;
}
