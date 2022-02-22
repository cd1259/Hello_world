#include <stdio.h>

int main() {
	int N = 0;
	scanf("%d", &N);
	int n = 0;
	for (n = 1; n * (n + 1) / 2 < N; n++) {
		;
	}
	int num = N - n * (n - 1) / 2;
	if (n % 2 == 0) {
		printf("%d/%d", num, n - num + 1);
	} else {
		printf("%d/%d", n - num + 1, num);
	}

	return 0;
}