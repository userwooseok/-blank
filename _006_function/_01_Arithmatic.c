#include <windows.h>
#include <stdio.h>

enum {
	ADD = 1, SUB, MUL, DIV, EXIT
};

void showMenu() {
	printf("----���� ����-----\n");
	printf("1. ���ϱ�\n");
	printf("2. ����\n");
	printf("3. ���ϱ�\n");
	printf("4. ������\n");
	printf("5. ����\n");
}

int getSelectMenu() {
	int num;
	printf("��ȣ ����>> ");
	scanf_s("%d", &num);
	return num;
}

double Add(double dNum0, double dNum1) {
	return dNum0 + dNum1;
}

double Sub(double dNum0, double dNum1) {
	return dNum0 - dNum1;
}

double Mul(double dNum0, double dNum1) {
	return dNum0 * dNum1;
}

double Div(double dNum0, double dNum1) {
	return dNum0 / dNum1;
}

double getDoubleNum() {
	double num;
	printf("�Ǽ� �Է� >> ");
	scanf_s("%lf", &num);
	return num;
}

void printResult(double result) {
	printf("\n");
	printf("����� %.2lf�Դϴ�.\n", result);
}

void cls() {
	system("cls");
}

void main() {
	int isRun = 1;
	while (isRun)
	{
		cls();
		showMenu();
		int sel = getSelectMenu();

		double dNum0 = 0, dNum1 = 0;
		double result = 0;
		switch (sel)
		{
		case ADD:
			dNum0 = getDoubleNum();
			dNum1 = getDoubleNum();
			result = Add(dNum0, dNum1);
			printfResult(result);
			break;
		case SUB:
			dNum0 = getDoubleNum();
			dNum1 = getDoubleNum();
			result = Sub(dNum0, dNum1);
			printfResult(result);
			break;
		case MUL:
			dNum0 = getDoubleNum();
			dNum1 = getDoubleNum();
			result = Mul(dNum0, dNum1);
			printfResult(result);
			break;
		case DIV:
			dNum0 = getDoubleNum();
			dNum1 = getDoubleNum();
			result = Div(dNum0, dNum1);
			printfResult(result);
			break;

		case EXIT:
			isRun = 0;
			break;
		}


		_getch();
	}
}


/*
* ��������
* ĳ��
* �޸�---- �ڵ�; ������Ÿ�ӿ� �����ǰ� ����ȴ�. ������ �ϸ� ����� �����Ǿ� ����� �ڵ带 �о�´�. read-only
*            ������: ����/static���� �� ���α׷��� ����ϴ� �����Ͱ� ����Ǵ� ��,
                    �������� �Ϸ�Ǹ� �ڵ�� ����/static ������ �ּҰ��� ����Ų��.
*                   ��Ÿ�� ���߿� �а� �� �� �ִ�.
*            ��: �����Ҵ��� �̷������ ��, ��Ÿ�� ���߿� ���÷� �ٲ��.
*           ����: �����Ҵ��� �̷������ ��. �� �����Ҵ��� ��Ÿ�ӿ��� ����� �� ����.
*               ��� ������������ �󸶸�ŭ �Ҵ������� �̹� �ڵ带 �������� ���� ������ �ִ�. �� ���¿��� ��Ÿ������ ����.
* �ϵ�
*/