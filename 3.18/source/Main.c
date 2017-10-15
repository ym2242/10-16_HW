#include<stdio.h>

int main(void)
{
	float sale = 0;
	float salary = 0;

	printf("Enter sales in dollars (-1 to end):");
	scanf_s("%f", &sale);

	while (sale != -1)
	{
		salary = sale * 0.09 + 200;
		printf("Salary is:	$%.2f\n\n", salary);
		printf("Enter sales in dollars (-1 to end)");
		scanf_s("%f", &sale);
	}
	system("pause");
	return 0;
}
