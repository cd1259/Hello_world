#include <stdio.h>
//1.����Ӧ���ڵ��õ�ǰ�棬������ſ�ʹ��
//2.��������Ϊvoid����������0
//3.��������ˣ�

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