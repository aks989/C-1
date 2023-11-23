#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

double deviation_(double num[], double *std)
{
	double sum = 0;
	double aver = 0;
	double vari = 0;
	double sum_1 = 0;
	int i = 0;
	
	for (i = 0; i < 5; i++)
	{
		sum = sum + num[i];
	}
	aver = sum / 5;

	for (i = 0; i < 5; i++)
	{
		sum_1 = (num[i] - aver) * (num[i] - aver);
	}
	vari = sum_1 / 5;
	*std = sqrt(vari);
	return *std;
}


int main()
{
	int i = 0;
	double num[5];
	double pr_std;
	printf("Enter 5 real numbers: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%lf", &num[i]);
	}
	deviation_(num, &pr_std);
	printf("Standard Deviation = ");
	printf("%lf", pr_std);
}