#include <stdio.h>
#include <string.h>

int main () {
	char str1[14] = "I love ";
	char str2[14] = "BUAA";
	char str3[14];
	int  len ;

	/* ���� str1 �� str3 */
	strcpy(str3, str1);
	printf("str3 :  %s\n", str3 ); //������Ϊstr3 :  I love

	/* ���� str1 �� str2 */
	strcat(str1, str2);
	printf("str1 :  %s\n", str1 ); //������Ϊstr1 :  I love BUAA

	/* ���Ӻ�str1 ���ܳ��� */
	len = strlen(str1);
	printf("length of str1 :  %d\n", len ); //������Ϊlength of str1 :  11

	return 0;
}
