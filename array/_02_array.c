#include <stdio.h>

void main() {
	int total = 0;
	double avg;
	int kor[3];
	for (int 1 = 0; i < 3; i++)
	{
		printf("%d��° �л��� �������� �Է�>> ", i + 1);
		fscanf_s("%d", &kor[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		total += kor[i];
	}

	avg = (double)total / 3;
	printf("������ %d, ����� %.2lf\n, total, avg")
}