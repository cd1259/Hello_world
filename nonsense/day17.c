#include <stdio.h>
#include <string.h>

int main () {
	char src[50], dest[50];

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");

	strcat(dest, src);

	printf("���յ�Ŀ���ַ����� |%s|\n", dest);
	char a[] = "vscode";
	printf("%s\n", a);

	return 0;
}