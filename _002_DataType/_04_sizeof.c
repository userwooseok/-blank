#include "stdio.h"

void main() {
	int a = 10;
	float b = 3.14f;
	double c = 4.5789;
	char d = 'Z';
	char str[6] = "Korea";
	long long e = 100;
	unsigned int f = -10;

	printf("% d % f % lf % c % s % llu % u\n", a, b, c, d, str, e, f);
	printf("a�� ũ�� : %llu %llu\n", sizeof(int), sizeof(a));
	printf("b�� ũ�� : %llu %llu\n", sizeof(float), sizeof(b));
	printf("c�� ũ�� : %llu %llu\n", sizeof(double), sizeof(c));
	printf("d�� ũ�� : %llu %llu\n", sizeof(char), sizeof(d));
	printf("str�� ũ�� : %llu", sizeof(str));
	printf("d�� ũ�� : %llu %llu\n", sizeof(long long), sizeof(e));
	printf("d�� ũ�� : %llu %llu\n", sizeof(unsigned int), sizeof(f));
}