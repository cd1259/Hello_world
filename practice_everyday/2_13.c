#include<stdio.h>

int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}

int main()
{
	//int* p;        //Ұ��ָ��>_<
	
	//int a = 10;
	//int* pa = &a;   //����ָ��һ��Ҫ��ʼ��
	//int* p = NULL;  //��֪����ʼ��ʲô���ÿ�ָ��

	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *p);
		p++;
	}

	printf("\n%d\n", &arr[9] - &arr[0]);*/

	//strlen ���ַ�������
	/*char arr[] = "bit";
	int len = my_strlen(arr);
	printf("len=%d\n", len);*/

	/*int arr[5] = {1,1,1,1,1};
	int* p = &arr[5];
	while (p > &arr[0])
	{
		*--p = 0;
		printf("%d\n", *p);
	}*/
	
	//����
	/*int a = 0;
	int* pa = &a;
	int** ppa = &pa;
	int*** pppa = &ppa;*/

	//ָ������
	int a = 1;
	int b = 3;
	int c = 10;
	int* arr[3] = { &a,&b,&c };

	return 0;
}