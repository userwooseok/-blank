#include <stdio.h>

#define KOR_NUM 5

void main() {
	int total = 0;
	double avg;
	int kor[KOR_NUM];
	for (int i = 0; i < KOR_NUM; i++)
	{
		ptintf("%d��° �л� �������� �Է� >> ", i + 1);
		scanf_s("%d", &kor[i]);
	}

	for (int i = 0; i < KOR_NUM; i++)
	{
		total += kor[i];
	}

	avg = (double)total / KOR_NUM;
	printf("������ %d, ����� % .2lf\n", total, avg);
}