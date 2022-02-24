#include <stdio.h>

int main() {
	char arr[105];
	scanf("%s", &arr);
	int i = 0;
	while (arr[i] != '\0') {
		if ((int)arr[i] >= 97 && (int)arr[i] <= 122)
			arr[i] -= 32;
		i++;
	}
	printf("%s\n", arr);
	return 0;
}