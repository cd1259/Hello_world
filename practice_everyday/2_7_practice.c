#include <stdio.h>
int main()
{
	//int a = 16;
	//a = a >> 1;
	////printf("%d\n", a);
	//int x = 3;
	//int y = 5;
	//a = x & y;
	////x...011
	////y...101
	////&...001
	////|...111
	////^...110      ��λ�����ͬΪ0������Ϊ1
	//printf("%d\n", a);
	//a = x | y;
	//printf("%d\n", a);
	//a = x ^ y;
	//printf("%d\n", a);

	//����������������м���1
	int num = 0;
	int count = 0;
	int i = 0;
	scanf_s("%d", &num);
	while (i < 32)
	{
		if (1 == (num & 1))
		{
			count++;
		}
		num = num >> 1;
		i++;
	}
	printf("%d\n", count);
	return 0;
}