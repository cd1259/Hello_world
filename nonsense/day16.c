#include <stdio.h>

int main() {
	int a[] = {1, 2, 3, 4, 5};
	int p = *(a + 1);
	printf("%d\n", p);
	p = *(&a[0]) + 1	;
	printf("%d\n", p);
	p = *(&a[0] + 1)	;
	printf("%d\n", p);
	int b = 2;
	int *pb = &b;
	printf("%d\n", *pb);

	return 0;
}