#include <stdio.h>

int main() {
	int n = 0;
	int x = 0;
	int a = 0;
	int b = 0;
	int count = 0;
	scanf("%d %d", &n, &x);
	for (a = 1; a <= n; a++) {
		b = a;
		while (1) {
			if (b % 10 == x) {
				count++;
			}
			b = b / 10;
			if (b == 0) {
				break;
			}
		}
	}
	printf("%d\n", count);
	return 0;
}