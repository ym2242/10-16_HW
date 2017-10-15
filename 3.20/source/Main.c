#include<stdio.h>

int main(void)
{
	int hours = 0;
	float moneyhour = 0;
	float salary = 0;
	printf("Enter # of hours worked (-1 to end):  ");
	scanf_s("%d", &hours);
	while (hours != -1)
	{
		printf("Enter hourly rate of the worker ($00.00):  ");
		scanf_s("%f", &moneyhour);
		if (hours > 40)
		{
			salary = moneyhour * (hours - 40) * 1.5 + moneyhour * 40;
		}
		else
		{
			salary = hours * moneyhour;
		}
		printf("Salary is $%.2f\n\n\n", salary);
		printf("Enter # of hours worked (-1 to end):  ");
		scanf_s("%d", &hours);
	}
	system("pause");
	return 0;
}