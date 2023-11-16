#include<stdio.h>
int main()
{
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = { 7, 8, 9, 10, 11, 12 };
	int* ar1 = &arr2[0];
	int* ar2 = &arr1[0];
	int i, temp1, temp2;
	printf("arr1: ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("arr2: ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	printf("\n");
	for (i = 0; i< 6; i++)
	{
		temp1 = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp1;
	}
	printf("after swap");
	printf("\narr1: ");
	for (int j = 0; j < 6; j++)
	{
		printf("%d ", arr1[j]);
	}
	for (i = 0; i < 6; i++)
	{
		temp2 = arr2[i];
		arr2[i] = arr1[i];
		arr1[i] = temp2;
	}
	printf("\narr2: ");
	for (int j = 0; j < 6; j++)
	{
		printf("%d ", arr1[j]);
	}

}