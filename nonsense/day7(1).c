#include <stdio.h>

int main() {
	int n = 0;
	int count = 1;
	while (scanf("%d", &n) != EOF) {
		count = count * n;
	}
	printf("连乘结果为%d\n", count);
	return 0;
}