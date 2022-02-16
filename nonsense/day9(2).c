#include <stdio.h>

int main() {
	int i = 1;
	int j = 0;
	printf("2 ");
	for (i = 1; i <= 100; i++) {
		for (j = 2; j <= i; j++) {
			if (i % j == 0) {
				break;
			}
			if (j = i) {
				printf("%d ", i);
			}
		}
	}

	return 0;
}