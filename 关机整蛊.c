#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	printf("\n���롰������\n������ĵ��Խ���һ�����ڹػ�\n������:>");
	system("shutdown /s /t 60");
	char input[20] = {0};
again: 
	scanf_s("%s", &input,20);
	if(strcmp("������", input) == 0)
    system("shutdown /a");
	else
	{
		printf("\n�����ײĲ�����\n");
		goto again;
	}
	
	return 0;
}