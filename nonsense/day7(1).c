#include <stdio.h>

int main() {
	int n = 0;
	int count = 1;
	while (scanf("%d", &n) != EOF) {
		count = count * n;
	}
	printf("���˽��Ϊ%d\n", count);
	return 0;
}