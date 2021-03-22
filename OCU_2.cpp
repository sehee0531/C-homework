#include<stdio.h>

int main(void) {

	int x ;
	int y ;

	x = 20;
	y = 10;

	int sum1 = x + y;
	int sum2 = x - y;
	int sum3 = x * y;
	int sum4 = x / y;

	printf("두수의 합은 : %d\n ", sum1);
	printf("두수의 차은 : %d\n ", sum2);
	printf("두수의 곱은 : %d\n ", sum3);
	printf("두수의 몫은 : %d\n ", sum4);

	return 0;
}