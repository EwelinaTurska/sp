#include <stdio.h>
#include <math.h>
int C(int n, int k) {
	if ((k==0) || (k==n))
		return 1;
	else
		return (C((n-1),(k-1))+C((n-1),k));
}
int main() {
int k,n;
printf("Podaj n i k: \n");
scanf("%d %d", &n, &k);
if (k>0 && k<n)
	printf("Wspolczynnik Newtona %d po %d wynosi %d\n", n, k, C(n, k));
else
	printf("Blad\n");
return 0;	
}
