#include <stdio.h>

int main() {
	int arr[10] = {0};
	int i;
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	int height = 0;
	scanf("%d", &height);
	int count = 0;
	for (i = 0; i < 10; i++) {
		if (height + 30 >= arr[i])
			count ++;
	}
	printf("%d\n", count);

	return 0;
}