#include<stdio.h>
#include<string.h>
int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
void Swap(int*p1,int*p2)
{
	int tmp = 0;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
int sushu(int x)
{
	int a;
		for (a = 2; a <= x / 2; a++)
		{
			if (x % a == 0)
				return 0;
	    }
		return 1;
}
int two_search(int arr[],int a,int sz)
{
	
	int left = 0;
	int right = sz-1;
	while (left<=right)
	{
		int mid = (right + left) / 2;
		if (arr[mid] < a)
			left = arr[mid] + 1;
		else if (arr[mid] > a)
			right = arr[mid] - 1;
		else
			return mid;
	}
		return -1;
}
void test(int*p)
{
	*p += 1;
}
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int mycount(char* arr)
{
	printf("%s\n", arr);
	if (*arr != '\0')
		return 1 + mycount(arr+1);
	else
		return 0;
}
int jiecheng(int n)
{
	if (n > 1)
	{
		return n * jiecheng(n - 1);
	}
	else
		return 1;
}
int feibo(int n)
{
	if (n <= 2)
		return 1;
	else
		return feibo(n - 1) + feibo(n - 2);	
}
int feibo2(int n)                                      
{                                                      
	int k = 3;                                         
	int num = 0,num1 = 1,num2 = 1;                     
	if (n <= 2)                                        
		return 1;
	else
	{
		while (k <= n)
		{
			num = num1 + num2;
			num1 = num2;
			num2 = num;
			k++;
		}
	}
	return num;
}
int feibo3(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int jiahe(int n)
{
	if (n <= 1)
		return 1;
	else
		return n+jiahe(n - 1);
}
int main()
{
	//int a = 10;
	//int b = 20;
	///*int max = get_max(a, b);
	//printf("%d\n", max);*/
	//printf("%d %d\n", a, b); 
	//Swap(&a,&b);
	//printf("%d %d\n", a, b);
	/*int a;
	scanf_s("%d", &a);
	if (sushu(a) == 1)
		printf("%d", a);*/

		/*int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
		int sz = sizeof(arr) / sizeof(arr[0]);
		int a = 8;
		int sum = two_search(arr, a,sz);
		if (sum == -1)
			printf("没找到\n");
		else
			printf("%d\n", sum);*/
			/*int num = 0;
			test(&num);
				printf("%d\n", num);
			test(&num);
				printf("%d\n", num);
			test(&num);
				printf("%d\n", num);*/

				/*int num = 0;
				scanf_s("%d", &num);
				print(num);*/

				/*char arr[] = "bit";
				int sum = mycount(arr);
				printf("%d\n", sum);*/

				//计算阶乘（函数递归）
				/*int a = 0;
				scanf_s("%d", &a);
				int sum = jiecheng(a);
				printf("%d!=%d", a, sum);*/

				//生成斐波那契数 1 1 2 3 5 8 13 21 34 55
				/*int n = 0;
				scanf_s("%d", &n);
				int num = feibo3(n);
				printf("%d\n", num);*/

				//n+(n-1)+(n-2)+...+1
				/*int n = 0;
				scanf_s("%d", &n);
				int sum = jiahe(n);
				printf("%d\n", sum);*/

	/*char arr[] = "abcf";
	printf("%d\n",strlen(arr));
	printf("%s\n", arr);*/

	int arr[2][3] = { {1,2,3},4,5,6, };
	

	return 0;
}