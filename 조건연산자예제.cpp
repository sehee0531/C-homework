#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int x, y;

	printf("ù��° ���� �Է��ϼ���=");
	scanf_s("%d", &x);
	printf("�ι�° ���� �Է��ϼ���=");
	scanf_s("%d", &y);

	printf("ū�� =%d\n", (x > y) ? x : y);
	printf("������ =%d\n", (x < y) ? x : y);

	return 0;
}