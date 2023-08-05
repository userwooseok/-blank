#include "stdio.h"

void main() {
	float Mit_Beon;
	float No_Pee;

	printf("밑변 입력>> ");
	scanf_s("%f", &Mit_Beon);

	printf("높이 입력 >> ");
	scanf_s("%f", &No_Pee);

	printf("삼각형의 넓이는 %f입니다.", 0.5f * Mit_Beon * No_Pee);
}