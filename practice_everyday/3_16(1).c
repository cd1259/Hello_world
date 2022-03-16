#include<stdio.h>

//若一个数（首位不为零）从左向右读与从右向左读都一样，我们就将其称之为回文数。
//
//例如：给定一个十进制数 5656，将 5656 加 6565（即把 5656 从右向左读），得到 121121 是一个回文数。
//
//又如：对于十进制数 8787：
//
//STEP1：87 + 78 = 16587 + 78 = 165
//STEP2：165 + 561 = 726165 + 561 = 726
//STEP3：726 + 627 = 1353726 + 627 = 1353
//STEP4：1353 + 3531 = 48841353 + 3531 = 4884
//
//在这里的一步是指进行了一次加法，上例最少用了 44 步得到回文数 48844884。
//写一个程序，给定一个数M（100位之内）
//求最少经过几步可以得到回文数。如果在 30 步以内（包含 30 步）不可能得到回文数，则输出 Impossible!。
//输入87，输出4

int main()
{
	int m = 0;
	scanf("%d", &m);
	int n = 0;
	int i, j, count = 1;
	int m1 = 0;
	int tmp = m;
	for (n = 0; n < 30; n++)
	{
		tmp = m;
		for (count = 1; count <= 100; count++)
		{
			tmp = tmp / 10;
			if (tmp == 0)
				break;
			if (tmp < 10)
				m1 = tmp;
		}
		tmp = m;
		for (i = 0; i < 100; i++)
		{
			int num = tmp % 10;
			for (j = 1; j < count; j++)
			{
				num *= 10;
			}
			m1 += num;
			count--;
			tmp /= 10;
			if (tmp < 10)
				break;
		}
		if (m == m1)
			break;
		m = m + m1;
	}
	if (n == 30)
		printf("Impossible\n");
	else
		printf("Step:%d", n);

	return 0;
}