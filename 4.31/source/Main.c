#include <stdio.h>
#include <stdlib.h>
int main(){
	int i;  
	int j;  
	  for (i = 1; i <= 19; i++){  
		if (i<(19 + 1) / 2 + 1){  
			for (j = 1; j <= 19; j++){  
				if ((19 + 1) / 2 - (i - 1) <= j && j <= (19 + 1) / 2 + (i - 1)){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
		}
		else{  
			for (j = 1; j <= 19; j++){  
				if ((19 + 1) / 2 - (19 - i) <= j && j <= (19 + 1) / 2 + (19 - i)){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
