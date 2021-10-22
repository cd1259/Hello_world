#include<stdio.h>
int main()
{
	//猜数游戏
	printf("*****************************************\n");
	printf("*************** 猜数游戏 ****************\n");
	printf("*****************************************\n");
	printf("***************** play ******************\n"); 
	int num = 123;     //要猜的数，我还不会生成随机数呜呜呜
	int guess, n = 1;
	int left = 1, right = 200;
	printf("\n请输入一个1~200的整数:>");
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
			printf("\n没猜中，小了\n范围为%d~%d,再猜一遍:>", left, right);
			scanf_s("%d", &guess);
			n++;
			while (guess < left || guess>right)
			{
				printf("范围为%d~%d，请重新输入:>", left, right);
				scanf_s("%d", &guess);
			}
		}
		else if (guess > num)
		{
			right = guess - 1;
			printf("\n没猜中，大了\n范围为%d~%d,再猜一遍:>", left, right);
			scanf_s("%d", &guess);
			n++;
			while (guess < left || guess>right)
			{
				printf("范围为%d~%d，请重新输入:>", left, right);
				scanf_s("%d", &guess);
			}
		}
	}
	printf("\n猜中了，结果为%d\n", guess);
	printf("总共猜了%d次\n", n);
	
	return 0;
}