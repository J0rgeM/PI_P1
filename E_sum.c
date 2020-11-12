#include <stdio.h>

int sdquadros(int x)
{
	return ((x+1)* x *(2*x+1))/6;
}

int soma_dos_quadros_entre(int x, int y)
{
	return sdquadros(y) - sdquadros(x-1);
}

int main(void)
{
	int x;
	int y;
	scanf("%d%d", &x, &y);
    int z = soma_dos_quadros_entre(x,y);
	printf("%d\n", z);
	return 0;
}

