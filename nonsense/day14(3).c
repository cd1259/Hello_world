#include <stdio.h>

int main() {
	int m, t, s;
	scanf("%d %d %d", &m, &t, &s);
	double n = (double)s / t;
	int sum = m - n;
	if (sum <= 0)
		printf("0\n");
	else
		printf("%d\n", sum);

	return 0;
}