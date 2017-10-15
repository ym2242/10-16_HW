#include<stdio.h>

int main(void)
{
	int day = 0;
	float principal = 0;
	float rate = 0;
	float interest = 0;
	printf("Enter loan principal (-1 to end): ");
	scanf_s("%f", &principal);
	while (principal != -1)
	{
		printf("Enter interest rate: ");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf_s("%d", &day);
		interest = (float)principal * rate * day / 365;
		printf("The interest charge is $%.2f\n\n\n", interest);
		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &principal);
	}
	system("pause");
	return 0;
}