#include <stdio.h>

int main() {
	int n = 2;
	int count = 1;
	int sum = 0;
	int a = 0;
	while (n <= 10) {
		for (a = 1, count = 1; a <= n; a++) {
			count = count * a;
		}
		sum += count;
		n += 2;
	}
	printf("sum:%d\n", sum);

	return 0;
}