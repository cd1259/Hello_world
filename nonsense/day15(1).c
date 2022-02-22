#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	int n1, p1;
	int n2, p2;
	int n3, p3;
	scanf("%d %d", &n1, &p1);
	scanf("%d %d", &n2, &p2);
	scanf("%d %d", &n3, &p3);
	int x, y, z;
	x = y = z = 0;
	int sum;
	for (x = 1; x * n1 < n; x++) {
		;
	}
	sum = p1 * x;
	for (x = 0; x * n1 + y * n2 + z * n3 < n; x++) {
		for (y = 0; x * n1 + y * n2 + z * n3 < n; y++) {
			for (z = 0; x * n1 + y * n2 + z * n3 < n; z++) {
				;
			}
			if (sum > p1 * x + p2 * y + p3 * z) {
				sum = p1 * x + p2 * y + p3 * z;
			}
			z = 0;
		}
		if (sum > p1 * x + p2 * y + p3 * z) {
			sum = p1 * x + p2 * y + p3 * z;
		}
		y = 0;
	}
	printf("%d\n", sum);

	return 0;
}