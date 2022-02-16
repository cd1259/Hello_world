#include <stdio.h>

int main() {
	int x, y, z;
	for (z = 0; z <= 100; z += 3) {
		x = (4 * z - 300) / 3;
		y = (600 - 7 * z) / 3;
		if (x >= 0 && y >= 0) {

			if ((4 * z - 300) % 3 == 0 && (600 - 7 * z) % 3 == 0) {

				printf("¹«¼¦:%d Ä¸¼¦:%d Ð¡¼¦:%d\n", x, y, z);
			}

		}
	}

	return 0;
}