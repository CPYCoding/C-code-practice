#include<stdio.h>
int main(void)
{
	int num,day;
	int i,j;
	printf("Please enter the number of days : ");
	scanf("%d",&num);
	printf("Please enter the starting day (Sun=0,Sat=7) : ");
	scanf("%d",&day);
	for(j=1;j<day;j++)
	{printf("   ");
	}
	
	for(i=1;i<=num;i++)
	{ 
	if((day-1)%7==0)
	{printf("\n");
	day==0;
	}
	printf("%2d ",i);
	day++;
	}
	
	return 0;
 } 
