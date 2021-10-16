#include<math.h>
#include<string.h>
#include<stdio.h>
int main()
{
	double a, b, c = 0;
	double r1, r2 = 0;
	printf("解一元二次方程ax^2+bx^2+c=0\n");
	printf("请纵向依次输入a,b,c的值\n");
	scanf_s("%lf\n%lf\n%lf", &a, &b, &c);
	r1 = -b + sqrt(b * b - 4 * a * c);
	r2 = -b - sqrt(b * b - 4 * a * c);
	r1 /= 2 * a;
	r2 /= 2 * a;
	if (b * b - 4 * a * c < 0)
		printf("方程没有实数解\n");
	if (r1 == r2)
		printf("方程有两个相同的实数解\nr1=r2=%lf", r1);
	if (b * b - 4 * a * c > 0)
		printf("r1=%lf\nr2=%lf\n", r1, r2);

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

	return 0;
}