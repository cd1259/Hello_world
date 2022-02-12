#include <stdio.h>

int main() {
	int a = 0;
	int count = 0;
	scanf("%d", &a);
	if (a % 4 == 0) {
		if (a % 100 == 0) {
			if (a % 400 == 0) {
				count = 1;
			}
		} else {
			count = 1;
		}
	}
	printf("%d\n", count);

	return 0;
}