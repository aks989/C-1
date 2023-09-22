#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	double dis_k;
	double dis_m;
	printf("거리 입력(단위: km): ");
	scanf("%lf", &dis_k);
	dis_m = dis_k / 1.609;
	printf("거리(단위: Mile): %.1f", dis_m);
}