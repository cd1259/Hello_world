#include<stdio.h>
int main()
{
	//������Ϸ
	printf("*****************************************\n");
	printf("*************** ������Ϸ ****************\n");
	printf("*****************************************\n");
	printf("***************** play ******************\n"); 
	int num = 123;     //Ҫ�µ������һ��������������������
	int guess, n = 1;
	int left = 1, right = 200;
	printf("\n������һ��1~200������:>");
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
			printf("\nû���У�С��\n��ΧΪ%d~%d,�ٲ�һ��:>", left, right);
			scanf_s("%d", &guess);
			n++;
			while (guess < left || guess>right)
			{
				printf("��ΧΪ%d~%d������������:>", left, right);
				scanf_s("%d", &guess);
			}
		}
		else if (guess > num)
		{
			right = guess - 1;
			printf("\nû���У�����\n��ΧΪ%d~%d,�ٲ�һ��:>", left, right);
			scanf_s("%d", &guess);
			n++;
			while (guess < left || guess>right)
			{
				printf("��ΧΪ%d~%d������������:>", left, right);
				scanf_s("%d", &guess);
			}
		}
	}
	printf("\n�����ˣ����Ϊ%d\n", guess);
	printf("�ܹ�����%d��\n", n);
	
	return 0;
}