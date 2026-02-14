#include <stdio.h>

int main(void)
{
	int total_days, starting_day, i,j;
	int one = 1;
	printf("Enter number of days in month:");
	scanf("%d", &total_days);
	
	printf("Enter starting days of the week (1 = Sun, 7 = Sat) : ");
	scanf("%d", &starting_day);
	
	for (j = 1; j < starting_day ; j++)
		{
			printf("   ");
		}
		
	for (i = 0; i < total_days; i++)
	{
		printf("%2d ", one);
		
		
		if ((starting_day - 1 + one) % 7 == 0)
		{
			printf("\n");
		}

		one++;

	}

	return 0;
}
