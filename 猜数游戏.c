#include<stdio.h>
int main()
{
	//������Ϸ
	int num = 123, guess;
	int left = 1, right = 200;
	printf("������һ��1~200������:>");
	scanf_s("%d", &guess);
	while (guess < 1 || guess>200)
	{
		printf("��ΧΪ1~200������������:>");
		scanf_s("%d", &guess);
	}
	while (guess != num)
	{
		if (guess < num)
		{
			left = guess + 1;
			printf("û���У�С��\n��ΧΪ%d~%d,�ٲ�һ��:>", left, right);
			scanf_s("%d", &guess);
			while (guess < left || guess>right)
			{
				printf("��ΧΪ%d~%d������������:>", left, right);
				scanf_s("%d", &guess);
			}
		}
		else if (guess > num)
		{
			right = guess - 1;
			printf("û���У�����\n��ΧΪ%d~%d,�ٲ�һ��:>", left, right);
			scanf_s("%d", &guess);
			while (guess < left || guess>right)
			{
				printf("��ΧΪ%d~%d������������:>", left, right);
				scanf_s("%d", &guess);
			}
		}
	}
	printf("�����ˣ����Ϊ%d\n", guess);
	
	return 0;
}