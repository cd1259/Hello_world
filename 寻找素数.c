#include<stdio.h>
#include<math.h>
int main()
{
	//���100��һ����������
	 //�Գ�����̫���ˣ�
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
	printf("\n�����%d������", c);
	return 0;
}