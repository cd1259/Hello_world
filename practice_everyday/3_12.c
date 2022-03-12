#include<stdio.h>
#include<math.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int count = 0;
	for (i = 1000; i <= n; i++)
	{
		if (i % 666 == 0 || i % 888 == 0)
		{
			count++;
			
		}
		int x = i / 100;
		int y = i - x * 100;
		if (x * x + y * y == i)
		{
			count++;
			
		}
		int a = x / 10;
		int b = x % 10;
		int c = y / 10;
		int d = y % 10;
		if (a * a * a * a + b * b * b * b + c * c * c * c + d * d * d * d == i)
		{
			count++;
		
		}
	}
	printf("%d\n", count);

	return 0;
}


//char arr[200];
//scanf("%s", &arr);
//int i;
//for (i = 0; i < 200; i++)
//{
//	if (arr[i] >= 'A' && arr[i] <= 'Z')
//	{
//
//		arr[i] += 32;
//	}
//
//}
//printf("%s", arr);

//double a, b, c;
//double x1, x2;
//scanf("%lf %lf %lf", &a, &b, &c);
//double num = b * b - 4 * a * c;
//if (num < 0)
//	printf("无解\n");
//if (num == 0)
//{
//	x1 = x2 = (-b + sqrt(num)) / (2 * a);
//	printf("相同解\n%.6f\n", x1);
//}
//if (num > 0)
//{
//	x1 = (-b + sqrt(num)) / (2 * a);
//	x2 = (-b - sqrt(num)) / (2 * a);
//	double tmp = x1;
//	if (x1 < x2)
//	{
//		x1 = x2;
//		x2 = tmp;
//	}
//	printf("%.6f\n%.6f", x1, x2);
//}