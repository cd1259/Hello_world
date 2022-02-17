#include <stdio.h>

int main() {
	int i = 0;
	int num = 1;
	int n = 1;
	for (i = 1; i < 1000; i++) {
		num = num * i;
		n = (n * ((i + 1) % 2333)) % 2333;
	}
	printf("%d\n", n);

	return 0;
}