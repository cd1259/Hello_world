#include <stdio.h>

int main() {
	int x = 0;
	scanf("%d", &x);
	if (x == 0 || x == 1) {
		printf("Today, I ate %d apple.\n", x);
	} else {
		printf("Today, I ate %d apples.\n", x);
	}
	return 0;
}