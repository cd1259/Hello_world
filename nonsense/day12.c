#include <stdio.h>
//1.函数应放在调用的前面，申明后才可使用
//2.函数类型为void，但返回了0
//3.函数后多了；

int sum(int n) {
	if (n > 0) {
		return sum(n - 1) + n;
	}
}

int main() {
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", sum(n));
	return 0;
}