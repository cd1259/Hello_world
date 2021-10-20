#include<stdio.h>
#include<math.h>
int main()
{
	//输出100到一百万间的素数
	 //试除法（太拉了）
	int a,b,c=0;
	for (a = 100; a <= 1000000; a++)
	{
		for (b = 2; b <= sqrt(a); b++)
		{
			if (a % b == 0)
			{
				break;
			}
		}
		if (b > sqrt(a))
		{
			printf("%d ", a);
			c++;
		}
	}
	printf("\n输出了%d个素数", c);
	return 0;
}