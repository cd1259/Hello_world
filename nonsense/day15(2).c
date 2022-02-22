#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	int arr[105] = {-1};
	int arr1[105] = {0};
	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}
	for (j = 1; j <= n; j++) {
		for (i = 0; i < j; i++) {
			if (arr[i] < arr[j]) {
				arr1[j]++;
			}
		}
	}
	for (i = 1; i <= n; i++) {
		printf("%d ", arr1[i] - 1);
	}

	return 0;
}