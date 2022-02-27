#include <stdio.h>

int main() {
	int l, m;
	scanf("%d %d", &l, &m);
	int i, j;
	int arr[10000] = {0};
	for (i = 0; i <= l; i++)
		arr[i] = 1;
	for (i = 0; i < m; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		for (j = a; j <= b; j++) {
			arr[j] = 0;
		}
	}
	int count = 0;
	for (i = 0; i <= l; i++) {
		count += arr[i];
	}
	printf("%d\n", count);

	return 0;
}