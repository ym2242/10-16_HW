#include<stdio.h>
#include<math.h>

int main(void)
{
	double amount;
	double principal = 5000.0;
	double rate=0;
	unsigned int year;
	printf("Enter your rate:(-1 to end)");
	scanf_s("%lf", &rate);
	while (rate != -1)
	{
		printf("%4s%21s\n", "Year", "Amount on deposit");
		for (year = 1; year <= 15; ++year)
		{
			amount = principal * pow(1.0 + rate, year);
			printf("%4u%21.2f\n", year, amount);
		}
		printf("\n\nEnter your rate:(-1 to end)");
		scanf_s("%lf", &rate);
	}
	system("pause");
	return 0;
}