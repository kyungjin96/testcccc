#include <stdio.h>

int sum(int a, int b)
{
	return a+b;
}

int main()
{
	int i = sum(1,3);

	printf("%d\n",i);
	return 0;
}
