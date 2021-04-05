#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int x, y;

	printf("첫번째 수를 입력하세요=");
	scanf_s("%d", &x);
	printf("두번째 수를 입력하세요=");
	scanf_s("%d", &y);

	printf("큰수 =%d\n", (x > y) ? x : y);
	printf("작은수 =%d\n", (x < y) ? x : y);

	return 0;
}