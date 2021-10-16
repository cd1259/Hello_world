#include<stdio.h>
int main()
{
	//猜数游戏
	int num = 123, guess;
	int left = 1, right = 200;
	printf("请输入一个1~200的整数:>");
	scanf_s("%d", &guess);
	while (guess < 1 || guess>200)
	{
		printf("范围为1~200，请重新输入:>");
		scanf_s("%d", &guess);
	}
	while (guess != num)
	{
		if (guess < num)
		{
			left = guess + 1;
			printf("没猜中，小了\n范围为%d~%d,再猜一遍:>", left, right);
			scanf_s("%d", &guess);
			while (guess < left || guess>right)
			{
				printf("范围为%d~%d，请重新输入:>", left, right);
				scanf_s("%d", &guess);
			}
		}
		else if (guess > num)
		{
			right = guess - 1;
			printf("没猜中，大了\n范围为%d~%d,再猜一遍:>", left, right);
			scanf_s("%d", &guess);
			while (guess < left || guess>right)
			{
				printf("范围为%d~%d，请重新输入:>", left, right);
				scanf_s("%d", &guess);
			}
		}
	}
	printf("猜中了，结果为%d\n", guess);
	
	return 0;
}