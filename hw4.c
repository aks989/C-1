#include<stdio.h>
int main()
{
	int num, num2;
	scanf("%d", &num);
	for (num2 = 2; num2 < num; num2 = num2 + 1)
	{
		if (num % num2 ==0)
		{
			printf("not prime");
			return 0;
		}
	printf("prime");
	return 0;
	}
}
