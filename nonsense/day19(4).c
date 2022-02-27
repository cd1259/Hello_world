#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int i, j, num = n;
	int cnt = 0;
	for (i = 0; i < n; i++, num--) {
		for (j = 0; j < num; j++) {
			cnt++;
			if (cnt < 10)
				printf("0");
			printf("%d", cnt);
		}
		printf("\n");
	}

	return 0;
}