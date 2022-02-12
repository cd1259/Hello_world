#include <stdio.h>

void add(int a, int b) {
	int c = 0;
	c = a + b;
	printf("%d\n", c);
}

void subtract(int a, int b) {
	int c = 0;
	c = a - b ;
	printf("%d\n", c);
}

void multiply(int a, int b) {
	int c = 0;
	c = a * b ;
	printf("%d\n", c);
}

void divide(int a, int b) {
	double c = 0;
	c = a / b ;
	printf("%f\n", c);
}

int main() {
	int a = 10;
	int b = 3;
	add(a, b);
	subtract(a, b);
	multiply(a, b);
	divide(a, b);

	return 0;
}