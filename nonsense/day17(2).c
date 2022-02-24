#include <stdio.h>
#include <string.h>

int main () {
	char str1[14] = "I love ";
	char str2[14] = "BUAA";
	char str3[14];
	int  len ;

	/* 复制 str1 到 str3 */
	strcpy(str3, str1);
	printf("str3 :  %s\n", str3 ); //输出结果为str3 :  I love

	/* 连接 str1 和 str2 */
	strcat(str1, str2);
	printf("str1 :  %s\n", str1 ); //输出结果为str1 :  I love BUAA

	/* 连接后，str1 的总长度 */
	len = strlen(str1);
	printf("length of str1 :  %d\n", len ); //输出结果为length of str1 :  11

	return 0;
}
