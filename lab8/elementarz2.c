#include <stdio.h>
#include <math.h>

int main()
{
int n = 1;
double pierwiastek;
while(n<=20){
	pierwiastek = sqrt(n);
	printf("Pierwiastek z %d wynosi:%f\n", n, pierwiastek);
	n++;}
return 0;
}
