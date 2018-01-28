#include <stdio.h>
#include <math.h>
int main() {
  int n;
  int i;
  int counter = 0;
  printf("Podaj liczbe calkowita n: ");
  scanf("%d", &n);
  
  if (n<2)
	printf("n nie jest liczba pierwsza\n");
    else {
      for(i=2; i < n; i++)
        if (n%i == 0)
          counter++;
          printf("Podana liczba '%d' jest %s\n", n, counter ? "zlozona" : "pierwsza");
	
    }
      
  return 0;
}
