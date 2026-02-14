#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int arr[100];
	int result[100];
	int input;
	int count=-1;
	int i,j;
	printf("Please enter some numbers until entering -1 : \n");
	
	while(input!=-1)
	{
		scanf("%d",&input);
		if(input==-1)
		{
			break;
		}
		count++;
		arr[count]=input;
		
	}
	
	
	
	
	printf("The numbers that dont repeat : ");
	for(i=0;i<=count;i++)
	{
		int warning=0;
		for(j=0;j<=count;j++)
		{
			if(arr[i]==arr[j]&&i!=j)
			{
				warning++;
			}
		}
		if(warning==0)
		{
			printf("%2d",arr[i]);
		}
	}
	
	
	return 0;
}
