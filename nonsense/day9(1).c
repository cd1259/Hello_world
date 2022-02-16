#include <stdio.h>

int main() {
	int i = 0;
	int j = 0;
	int n = 0;
	int num = 0;
	int count = 0;
	scanf("%d", &n);
	for (i = 0, j = 1;; j++) {
		for (num = j; num > 0; num--) {
			count += j;
			i++;
			if (i == n) {
				break;
			}
		}
		if (i == n) {
			break;
		}
	}
	printf("%d\n", count);


	return 0;
}