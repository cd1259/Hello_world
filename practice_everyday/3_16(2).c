#include<stdio.h>
//luogu p1100
int main()
{
	int n = 0;
	scanf("%d", &n);
	unsigned int n1 = n >> 16;
	unsigned int n2 = n << 16;
	printf("%u", n1 + n2);

	return 0;
}