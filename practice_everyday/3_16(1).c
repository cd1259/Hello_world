#include<stdio.h>

//��һ��������λ��Ϊ�㣩�������Ҷ�������������һ�������Ǿͽ����֮Ϊ��������
//
//���磺����һ��ʮ������ 5656���� 5656 �� 6565������ 5656 ��������������õ� 121121 ��һ����������
//
//���磺����ʮ������ 8787��
//
//STEP1��87 + 78 = 16587 + 78 = 165
//STEP2��165 + 561 = 726165 + 561 = 726
//STEP3��726 + 627 = 1353726 + 627 = 1353
//STEP4��1353 + 3531 = 48841353 + 3531 = 4884
//
//�������һ����ָ������һ�μӷ��������������� 44 ���õ������� 48844884��
//дһ�����򣬸���һ����M��100λ֮�ڣ�
//�����پ����������Եõ�������������� 30 �����ڣ����� 30 ���������ܵõ�������������� Impossible!��
//����87�����4

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