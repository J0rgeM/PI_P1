#include <stdio.h>

int main(void) 
{
	 int x;
     scanf("%d", &x);
     int z = 2147483647/x; //resultado desta operação vai dar o maior múltiplo de x antes de dar overflow
     printf("%d\n", z);
     return 0;
}