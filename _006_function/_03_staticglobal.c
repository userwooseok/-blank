#include <stdio.h>

int count = 0;

void countFunc() {
	count++;
}

void callNumFunc() {
	printf("�Լ� ȣ�� Ƚ���� %d�Դϴ�.\n", count);
}

void main() {
	for (int i = 0; i < 10; i++) {
		countFunc();
	}

	callNumFunc();
}