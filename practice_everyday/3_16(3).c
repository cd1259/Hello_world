#include<stdio.h>
//������λ������λ���䣬����Ϊ���ƣ�ȱλ��0
int main()
{
	//int a = 0;
	//scanf("%d", &a);
	////a &= (~(2047 << 7));
	//a |= (3 << 7);
	//printf("%d", a);
	char arr[105];
	scanf("%s", &arr);
	int i;
	int d = 0, x = 0;
	for (i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			x++;
		}
		if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			d++;
		}
	}
	printf("Сд%d\n��д%d\n�ܹ�%d\n", x, d, i);

	return 0;
}