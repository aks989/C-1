#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve(int num)
{
	if (num < 2)
	{
		printf("%d", num);
	}
	else
	{
		solve(num / 2);
		printf("%d", num % 2);
	}
}

int main()
{
	int num;
	printf("10������ �Է��ϼ���: ");
	scanf("%d", &num);

	solve(num);


	

}