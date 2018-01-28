#include <stdio.h>
#include <math.h>

int potega(int n,int k) {
	
	if (k==1)
		return n;
	else
		return (n*potega(n,(k-1)));
}
int main() {
	int n, k;
	printf("Podaj n i k: \n");
	scanf("%d %d", &n, &k);
	if (k<0)
		printf("Blad\n");
	else
		printf("%d\n", potega(n,k));
	return 0;
}
