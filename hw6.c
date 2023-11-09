#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int even_num(int a)
{
	if (a % 2 == 0)
	{
		printf("%d ", a);
	}
	return 0;
}

int odd_num(int a)
{
	if (a % 2 != 0)
	{
		printf("%d ", a);
	}
	return 0;
}
int main()
{
	int i;
	int a[5];

	printf("Please input five integers: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}

	printf("Odd numbers:");
	for (i = 0; i < 5; i++)
	{
		even_num(a[i]);
	}

	printf("Even numbers:");
	for (i = 0; i < 5; i++)
	{
		odd_num(a[i]);
	}
}