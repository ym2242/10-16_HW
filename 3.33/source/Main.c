#include<stdio.h>

int main(void)
{
	int h = 0;
	int w = 0;
	int counter = 1;
	int widecounter = 1;
	int space;
	printf("�п�J�ϧΪ��e:");
	scanf_s("%d", &w);
	printf("�п�J�ϧΪ���:");
	scanf_s("%d", &h);
	space = w - 2;
	while (counter<=h)
	{
		if (counter==1 || counter==h)
		{
			while (widecounter <= w)
			{
				printf("+");
				widecounter++;
			}
			printf("\n");
		}
		else
		{
			printf("+");
			while (widecounter<=space)
			{
				printf(" ");
				widecounter++;
			}
			printf("+\n");
		}
		counter++;
		widecounter = 1;
	}
	system("pause");
	return 0;
}