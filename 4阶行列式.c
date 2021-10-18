#include<stdio.h>
int main()
{
	double a11, a12, a13, a14, a21, a22, a23, a24;
	double a31, a32, a33, a34, a41, a42, a43, a44;
	printf(" | a11 a12 a13 a14 |\n");
	printf(" | a21 a22 a23 a24 |\n");
	printf(" | a31 a32 a33 a34 |\n");
	printf(" | a41 a42 a43 a44 |\n");
	printf("请输入各项的值，用空格隔开\n");
	scanf_s("%lf %lf %lf %lf", &a11, &a12, &a13, &a14);
	scanf_s("%lf %lf %lf %lf", &a21, &a22, &a23, &a24);
	scanf_s("%lf %lf %lf %lf", &a31, &a32, &a33, &a34);
	scanf_s("%lf %lf %lf %lf", &a41, &a42, &a43, &a44);
	double k1 = a21 / a11;
	a21 -= a11 * k1;   a22 -= a12 * k1;
	a23 -= a13 * k1;   a24 -= a14 * k1;
	double k2 = a31 / a11;
	a31 -= a11 * k2;   a32 -= a12 * k2;
	a33 -= a13 * k2;   a34 -= a14 * k2;
	double k3 = a41 / a11;
	a41 -= a11 * k3;   a42 -= a12 * k3;
	a43 -= a13 * k3;   a44 -= a14 * k3;
	double k4 = a32 / a22;
	a32 -= a22 * k4; a33 -= a23 * k4;
	a34 -= a24 * k4;
	double k5 = a42 / a22;
	a42 -= a22 * k5; a43 -= a23 * k5;
	a44 -= a24 * k5;
	double k6 = a43 / a33;
	a43 -= a33 * k6; a44 -= a34 * k6;
	printf("化简后的行列式为：\n");
	printf(" | %lf %lf %lf %lf |\n", a11, a12, a13, a14);
	printf(" | %lf %lf %lf %lf |\n", a21, a22, a23, a24);
	printf(" | %lf %lf %lf %lf |\n", a31, a32, a33, a34);
	printf(" | %lf %lf %lf %lf |\n", a41, a42, a43, a44);
	double num = a11 * a22 * a33 * a44;
	printf("  结果为 % lf\n", num);
	return 0;
}