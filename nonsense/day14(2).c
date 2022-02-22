#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	double sum = 0;
	if (n <= 150)
		sum = 0.4463 * n;
	if (n > 150 && n <= 400)
		sum = 0.4463 * 150 + 0.4663 * (n - 150);
	if (n > 400)
		sum = 0.4463 * 150 + 0.4663 * 250 + 0.5663 * (n - 400);
	printf("%.1f\n", sum);

	return 0;
}