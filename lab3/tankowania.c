#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  FILE *in_handle;
  char bufor[BUFSIZ];
  unsigned int ui;
  double x, y;
  int km;
  double liters;
  double cost;
  in_handle = fopen(argv[1], "r");
  while (fgets(bufor, BUFSIZ, in_handle) != NULL) {
    sscanf(bufor, "%u %lf %lf", &ui, &x, &y);
    if (bufor[0] >= 48 && bufor[0] <= 57){
      printf("--> %d %.2f %.2f\n", ui, x, y);
	}
   }
   fclose(in_handle);
  return EXIT_SUCCESS;
}
