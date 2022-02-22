#include <stdio.h>

int fun(int n) {

	if (n >= 2)
		return fun(n - 1) + fun(n - 2);
	else
		return 1;
}

int main() {
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", fun(n));

	return 0;
}