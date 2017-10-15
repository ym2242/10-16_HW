#include<stdio.h>

int main(void)
{
	int i,j;
	puts("(A)");
	for ( i = 1; i <= 10; ++i)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("%s", "\n");
	}
	printf("\n\n\n");
	puts("(B)");
	for ( i = 10; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n\n\n");
	puts("(C)");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (j >= i)
			{
				printf("%s", "*");
			}
			else
			{
				printf("%s", " ");
			}
		}

		printf("\n");
	}
	printf("\n\n\n");
	puts("(D)");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (j <= (10 - i))
			{
				printf("%s", " ");
			}
			else
			{
				printf("%s", "*");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}