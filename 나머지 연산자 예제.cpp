#include<stdio.h>
#define SEC_PER_MINUTE 60

int main() {
	int input, minute, second;
	printf("�ʸ� �Է��ϼ���");
	scanf_s("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("%d�ʴ� %d�� %d�� �Դϴ�.", input, minute, second);

	return 0;

}