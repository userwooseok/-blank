#include "stdio.h"

void main() {
	float Mit_Beon;
	float No_Pee;

	printf("�غ� �Է�>> ");
	scanf_s("%f", &Mit_Beon);

	printf("���� �Է� >> ");
	scanf_s("%f", &No_Pee);

	printf("�ﰢ���� ���̴� %f�Դϴ�.", 0.5f * Mit_Beon * No_Pee);
}