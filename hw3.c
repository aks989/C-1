#include<stdio.h>
int main()
{
	for (int num = 0; num < 5; num = num + 1)
	{
		for (int num2 = num; num2 < 5-1; num2 = num2 + 1)
		{
			printf(" ");
		}
		
		for ( int num3 = 0; num3 < num * 2 + 1; num3 = num3 + 1)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
