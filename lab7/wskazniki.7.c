#include <stdio.h>

#define MIESIACE 12
#define LATA 4

int main () {
  int deszcz[LATA][MIESIACE] = { // dane o opadach są wyrażone w mm
    {29, 34, 34, 39, 34, 47, 35, 27, 29, 28, 32, 38},  // 2008
    {24, 25, 30, 36, 29, 34, 30, 27, 27, 23, 28, 27},  // 2009
    {31, 36, 41, 42, 35, 43, 35, 30, 34, 31, 33, 37},  // 2010
    {39, 32, 50, 53, 39, 38, 50, 43, 36, 35, 54, 40}   // 2011
  };
}
int suma(lata, miesiace) {
int deszcz[4][12];
int i=0;
int j=0;
int opad_roczny = 0;
	for(j; j<12; j++)
		opad_roczny = opad_roczny + *(deszcz+j+0));
	
		
}
