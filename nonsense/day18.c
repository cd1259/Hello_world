#include <stdio.h>

int main() {
	int n = 0;
	int i = 0;
	int arr[100] = {0};
	scanf("%d", &n);
	while (i < n) {
		scanf("%d", &arr[i]);
		i++;
	}
	int j = 0;
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				int tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
		printf("%d ", arr[i]);
	}

	return 0;
}