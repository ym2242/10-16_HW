#include<stdio.h>

int main(void)
{
	int num=0;
	
	printf("��J�A���~��N�X\n");
	printf("(1)�g�z�H��(2)���~�u(3)�����(4)�s�u\n");
	scanf_s("%d", &num);
		switch (num)
	{
		case 1:
		{
				  double salary = 0.0;
				  printf("�п�J�T�w�g�~:");
				  scanf_s("%lf", &salary);
				  printf("�z���~��:%lf\n", salary);
				  break;
		}
		case 2:
		{
				  double fare_per_hour;
				  int hours;
				  printf("�п�J�u�@�ɼ�:");
				  scanf_s("%d", &hours);
				  printf("�п�J���~:");
				  scanf_s("%lf", &fare_per_hour);
				  if (hours > 40){
					  printf("�z���~��:%lf\n", fare_per_hour*(1.5*hours - 20));
				  }
				  else if (hours >= 0){
					  printf("�z���~��:%lf\n", fare_per_hour*hours);
				  }
				  else
				  {
					  printf("�z���~��:0\n");
				  }
				  break;
		}
		case 3:
		{
				  double sale;
				  printf("�п�J�P����B:");
				  scanf_s("%lf", &sale);
				  printf("�z���~��:%lf\n", 250 + sale*0.057);
				  break;
		}
		case 4:
		{
				  int pieces;
				  double fare_per_piece;
				  printf("�п�J�C��u��:");
				  scanf_s("%lf", &fare_per_piece);
				  printf("�п�J���:");
				  scanf_s("%d", &pieces);
				  printf("�z���~��:%lf\n", fare_per_piece*pieces);
				  break;
		}
		default:
			printf("�п�J���T�N�X\n");
			break;
	}

		system("pause");
		return 0;
}