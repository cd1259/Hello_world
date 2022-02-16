#include <stdio.h>

int main() {
	int n = 0;//ÈËÊı
	while (scanf("%d", &n) != EOF) {
		int a = 0;
		double average = 0; //qt
		double average1 = 0; //jg
		double average2 = 0; //90
		int count1 = 0; //90
		int count2 = 0; //jg
		double sum = 0; //qt
		double sum1 = 0; //jg
		double sum2 = 0; //90
		int i = 0;
		while (n > 0) {
			scanf("%d", &a);
			sum += a;
			if (a >= 60) {
				count2++;
				sum1 += a;
				average1 = sum1 / count2;
			}
			if (a >= 90) {
				count1++;
				sum2 += a;
				average2 = sum2 / count1;
			}
			n--;
			i++;
		}
		average = sum / i;
		printf("%.2f %.2f %.2f %d\n", average, average1, average2, count1);
	}

	return 0;
}