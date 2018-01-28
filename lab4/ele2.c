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
	   if (counter > 0 )
		  printf("n nie jest liczba pierwsza\n");
 
		else
			printf("n jest liczba pierwsza\n");
    }
      
  return 0;
}
