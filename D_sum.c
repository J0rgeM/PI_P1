#include <stdio.h>

int sum(int x, int y)
{
	return x <= 1 ? y : sum(x-2, y+1);	
}

int half(int x)
{
 	int y=0;
 	return sum(x,y); 
}

int main(void)
{ 
 	int x;
 	scanf("%d", &x);
 	int z = half(x);
 	printf("%d\n", z);
 	return 0;
} 