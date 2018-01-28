#include <stdio.h>
int NWD(int a, int b) {
	if (a==b)
		return a;
	else
		if (b>a)
			return NWD(a,(b-a));
		else
			return NWD((a-b),b);
}

int main() {
int a,b;
printf("Podaj dwie liczby: \n");
scanf("%d %d", &a, &b);
printf("Najwiekszym wspolnym dzielnikiem %d i %d jest %d\n", a, b, NWD(a, b));
return 0;	
}
