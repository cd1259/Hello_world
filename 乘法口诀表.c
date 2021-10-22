#include<stdio.h>
int main()
{
	int i, k = 0, sum = 0;
	for (i = 1, k = 1; i <= 9; i++)
	{

		for (k = 1; i >= k; k++)
		{
			sum = i * k;
			printf("%d*%d=%d\t", k, i, sum);
			//printf("%d*%d=%2d ", k, i, sum);
			//printf("%d*%d=%-2d ", k, i, sum);
		}
		printf("\n");
	}

	return 0;
}