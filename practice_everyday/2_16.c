#include<stdio.h>

void print(int arr[], int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void reverse(int arr[],int sz)
{
	int i, j, tmp;
	for (i = 0, j = sz - 1; i<=j; i++, j--)
	{
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
	print(arr, sz);
}

struct stu
{
	char name[20];
	int tel[20];
	char id[7];
	char sex[2];
	int age;
}s1, s2, s3;//全局结构体变量,尽量少用

int main()
{
	/*int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	reverse(arr,sz);*/


	

	return 0;
}