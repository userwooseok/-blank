#include <stdio.h>

int countFunc() 
{
	static int count = 0;
	count++;
	return count;
}

void callNumFunc(param) {
	printf("�Լ� ȣ�� Ƚ���� %d�Դϴ�\n", param);
}

void main() {
	int num = 0;
    for (int i = 0; i < 10; i++)
	    num = countFunc();

    callNumFunc(num);
}

/*static ��������*/