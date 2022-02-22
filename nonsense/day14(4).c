#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int x, y, z;
	if (a >= b) {
		if (a >= c) {
			x = a;
			if (b >= c) {
				y = b;
				z = c;
			} else {

				y = c;
				z = b;
			}
		} else {
			x = c;
			if (b >= a) {
				y = b;
				z = a;
			} else {



				y = a;
				z = b;
			}
		}
	} else {

		if (b >= c) {
			x = b;
			if (a >= c) {
				y = a;
				z = c;
			} else {

				y = c;
				z = a;
			}
		} else {
			x = c;
			if (a >= b) {
				y = a;
				z = b;
			} else {

				y = b;
				z = a;
			}
		}
	}

	if (y + z <= x)
		printf("Not triangle\n");
	else {
		if (y * y + z * z == x * x)
			printf("Right triangle\n");
		else {
			if (z * z + y * y > x * x)
				printf("Acute triangle\n");
			else
				printf("Obtuse triangle\n");
		}
		if (x == y || y == z) {
			printf("Isosceles triangle\n");
			if (x == y && y == z)
				printf("Equilateral triangle\n");
		}
	}



	return 0;
}