#include<stdio.h>
struct country_info {
	char Name[30];
	char Country[30];
	int population;
};

int main()
{
	struct country_info arr[3];
	for (int i = 0; i < 3; i++)
	{
		printf("Name > ");
		scanf_s("%s", arr[i].Name, sizeof(arr[i].Name));
		printf("Country > ");
		scanf_s("%s", arr[i].Country, sizeof(arr[i].Country));
		printf("name > ");
		scanf_s("%d", arr[i].population);

	}
	for (int j = 0; j < 3; j++)
	{
		printf("Name: %s \n", arr[j].Name);
		printf("Country: %s \n", arr[j].Country);
		printf("name: %d \n", arr[j].population);
	}
}