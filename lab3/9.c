#include<stdio.h>
int main()
{
	int licz1;
	int licz2;

	printf("Podaj dwie liczby całkowite: \n");
	scanf("%d %d", &licz1, &licz2);

	int iloraz = licz1;
	int iloczyn = licz2;
	int suma = licz2;
	while (iloraz >= 1) {
		iloraz = iloraz / 2;
		iloczyn = iloczyn * 2;
		if (iloraz % 2 ==  1)
			suma = suma + iloczyn;

	}
	printf("%d \n", suma);
	return 0;
}
