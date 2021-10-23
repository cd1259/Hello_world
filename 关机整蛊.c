#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	printf("\n输入“我是猪”\n否则你的电脑将在一分钟内关机\n请输入:>");
	system("shutdown /s /t 60");
	char input[20] = {0};
again: 
	scanf_s("%s", &input,20);
	if(strcmp("我是猪", input) == 0)
    system("shutdown /a");
	else
	{
		printf("\n不见棺材不掉泪\n");
		goto again;
	}
	
	return 0;
}