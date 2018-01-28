#include <stdio.h>
int main() {
  int m;
  int i;
  int suma;
  int n;
 
  printf("Podaj liczbe m: \n");
  scanf("%d", &m);
  suma = 0;
 
  while (suma < m) {
     suma = suma+i;
     i=i+1;  
  }
  n = i-1;
  printf("Szukana liczba to:%d \n", n);
  return 0;
}
