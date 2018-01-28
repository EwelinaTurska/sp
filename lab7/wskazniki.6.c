#include <stdio.h>
#include <string.h>
#include <ctype.h>
void napis(char *tekst) {
	int i=0;
	while(isspace(*(tekst+i))) i++;
		printf("%p\n", (tekst+i));
	
}
int main() {
char tekst[] = "            FFFFFdd ";
napis(tekst);
return 0;	
}
