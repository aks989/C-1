#include<stdio.h>
int main()
{
	int a;
	char ch[1000];
	printf("Input> ");
	fgets(ch, sizeof(ch), stdin);

	const int diff = 'a' - 'A';

	for (int i = 0; ch[i]; i++)
	{
		if (ch[i] >= 'A' && ch[i] <= 90)
		{
			ch[i] = ch[i] + diff;
		}
		else if (ch[i] >= 'a' && ch[i] <= 'z')
		{
			ch[i] = ch[i] - diff;
		}
	}
	
	printf("\n");
	printf("Output> ");
	printf("%s\n", ch);
}
