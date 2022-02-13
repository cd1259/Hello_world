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
	//int* p;        //野生指针>_<
	
	//int a = 10;
	//int* pa = &a;   //创建指针一定要初始化
	//int* p = NULL;  //不知道初始化什么就用空指针

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

	//strlen 求字符串长度
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
	
	//套娃
	/*int a = 0;
	int* pa = &a;
	int** ppa = &pa;
	int*** pppa = &ppa;*/

	//指针数组
	int a = 1;
	int b = 3;
	int c = 10;
	int* arr[3] = { &a,&b,&c };

	return 0;
}