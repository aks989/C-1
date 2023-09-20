#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num1, num2;
	printf("정수 두 개 입력:");
	scanf("%d %d", &num1, &num2); //10, 15 입력
	printf("AND의 연산 값: %d\n", num1 & num2);
	printf("OR의 연산 값: %d\n", num1 | num2);
	printf("XOR의 연산 값: %d\n", num1 ^ num2);
}