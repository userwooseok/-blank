#include <stdio.h>

void main() {
	int total = 0;
	double avg;
	int kor0, kor1, kor2;
	printf("3�� �л��� �������� �Է�>> ");
	scanf_s("%d %d %d", &kor0, &kor1, &kor2);

	total = kor0 + kor1 + kor2;
	avg = (double)total / 3;

	printf("������ %d, ����� %.21f\n", total, avg);
}