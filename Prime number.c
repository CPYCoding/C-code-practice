#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int num,i,j,count;
	
	printf("Please enter the range to find the prime number(1-?): ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
		
			if(i%j==0)
			{
				count++;
			}
			
		}
		if(count==2)
		printf("%3d is a prime number\n",i);
		else
		continue;
	}
	
	return 0;
}
