#include<stdio.h>

int main(void)
{
	unsigned int account = 0;
	 float balance= 0;
	 float charge= 0;
	 float credit= 0;
	 float limit= 0;
	 
		 printf("Enter account number (-1 to end):", account);
		 scanf_s("%d", &account);
		 while (account != -1)
		 {
		 printf("Enter beginning balance:");
		 scanf_s("%f", &balance);
		 printf("Enter total charges:");
		 scanf_s("%f", &charge);
		 printf("Enter total credit:");
		 scanf_s("%f", &credit);
		 printf("Enter credit limit:");
		 scanf_s("%f", &limit);
		 balance = balance + charge - credit;
		 printf("Account:	%d\n", account);
		 printf("Credit limit:	%.2f\n", limit);
		 printf("Balance:	%.2f\n", balance);
		 if (balance>limit)
		 {
			 printf("Credit Limit Exceeded\n\n\n");
		 }
		 else
		 {
			 printf("\n\n\n");
		 }
		 printf("Enter account number (-1 to end):", account);
		 scanf_s("%d", &account);
	 }
	system("pause");
	return 0;
}

