#include <stdio.h>

int concatenate (int a, int b)
{ 
	return b == 0 ? a : concatenate(a*10,b / 10); 
}
int main(void)
{
	int a;
	int b; 
	scanf("%d%d", &a, &b);
	int c = concatenate(a,b) + b;
	printf("%d\n", c);
	return 0;
}