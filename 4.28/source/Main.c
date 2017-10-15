#include<stdio.h>

int main(void)
{
	int num=0;
	
	printf("輸入你的薪資代碼\n");
	printf("(1)經理人員(2)時薪工(3)抽佣金(4)零工\n");
	scanf_s("%d", &num);
		switch (num)
	{
		case 1:
		{
				  double salary = 0.0;
				  printf("請輸入固定週薪:");
				  scanf_s("%lf", &salary);
				  printf("您的薪水:%lf\n", salary);
				  break;
		}
		case 2:
		{
				  double fare_per_hour;
				  int hours;
				  printf("請輸入工作時數:");
				  scanf_s("%d", &hours);
				  printf("請輸入時薪:");
				  scanf_s("%lf", &fare_per_hour);
				  if (hours > 40){
					  printf("您的薪水:%lf\n", fare_per_hour*(1.5*hours - 20));
				  }
				  else if (hours >= 0){
					  printf("您的薪水:%lf\n", fare_per_hour*hours);
				  }
				  else
				  {
					  printf("您的薪水:0\n");
				  }
				  break;
		}
		case 3:
		{
				  double sale;
				  printf("請輸入銷售金額:");
				  scanf_s("%lf", &sale);
				  printf("您的薪水:%lf\n", 250 + sale*0.057);
				  break;
		}
		case 4:
		{
				  int pieces;
				  double fare_per_piece;
				  printf("請輸入每件工資:");
				  scanf_s("%lf", &fare_per_piece);
				  printf("請輸入件數:");
				  scanf_s("%d", &pieces);
				  printf("您的薪水:%lf\n", fare_per_piece*pieces);
				  break;
		}
		default:
			printf("請輸入正確代碼\n");
			break;
	}

		system("pause");
		return 0;
}