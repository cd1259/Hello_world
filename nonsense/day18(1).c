#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int arr[100] = {0};
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int j = 0;
	for (j = 1; j < n; j++) {
		for (i = 0; i < n - j; i++) {
			if (arr[i] < arr[i + 1]) {
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}