#include <stdio.h>

int gcd(int a, int b) {
	int max = (a >= b) ? a : b;
	int min = (a < b) ? a : b;
	int r = max % min;
	if (r == 0)
		return min;
	else
		return gcd(min, r);
}

int main() {
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("%d\n", gcd(a, b));

	return 0;
}