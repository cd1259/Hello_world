#include<stdio.h>

int main()
{
	//int a = 0;
	//int* p = &a;//指针变量
	//char* pa = &a;
	//printf("%p\n",p);
	//printf("%p\n", p + 1);
	//printf("%p\n", pa);
	//printf("%p\n", pa + 1);
	//printf("%d\n", sizeof(int*));

	int arr[10] = { 0 };
	//int* p = arr;           //有&取数组全部地址，无&取首元素地址
	char* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}

	return 0;
}