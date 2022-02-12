#include <stdio.h>

/*int main() {
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = 0;
	c = (int)(10 * a + b) / 19;
	printf("%d\n", c);
	return 0;
}*/

int main() {
	int a, b, c, d, e, f;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	e = (int)((c - a) * 60 + d - b) / 60;
	f = ((c - a) * 60 + d - b) % 60;
	printf("%d %d\n", e, f);
	return 0;
}