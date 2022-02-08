#include<stdio.h>

struct student
{
	char name[10];
	int age;
	int id;
};

int main()
{
	int a = 10;
	short b = 0;
	printf("%d\n", sizeof(b = a + 5));
	printf("%d\n", b);
	printf("%d\n",b = a + 5);
	printf("%d\n", b);

	a = 0;
	b = 0;
	if (a > 5)
		b = 3;
	else
		b = -3;
	//µÈÍ¬ÓÚ:
	b = (a > 5 ? 3 : -3);
	printf("%d\n", b);
	
	struct student cd = { "cd",100,2013968515 };
	printf("%d\n", cd.age);

	return 0;
}