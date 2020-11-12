#include <stdio.h>

int sum(int x, int y)
{
	return y == 0 ? x : sum(x+1, y-1);

}

int twice(int x)
{
 	return sum(x,x); //soma o x por ele próprio para dar o dobro de x
}

int main(void)
{
 	int x;
 	scanf("%d", &x);
 	int s = twice(x);
 	printf("%d\n", s);
 	return 0;
} 