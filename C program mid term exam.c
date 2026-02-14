#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define num 200

int x[200];
int y[200];

file_open(){
	
	FILE *file=fopen("coordinate.txt","w");
	int i;
	for(i=0;i<200;i++){
		fprintf(file,"(%d,%d)\n",x[i],y[i]);
	}
	fclose(file);
}

int bubble_sort(int j){
	
	int i,temp;
	if(j==0)
	{
		for(i=0;i<200;i++){
		printf("(%d,%d)\n",x[i],y[i]);
	}
		return 0;
	}
	else
	{
		for(i=0;i<j;i++)
	{
		if(y[i]<y[i+1])
		{
			swap(&y[i],&y[i+1]);
			swap(&x[i],&x[i+1]);
		}
		
		else if(y[i]==y[i+1])
		{
			if(x[i]>x[i+1])
			{
				swap(&y[i],&y[i+1]);
			    swap(&x[i],&x[i+1]);
			}
		}
	}
	bubble_sort(j-1);
	}
}

insertion_sort(){
	
	int count;
	int i,j;
	for(i=1;i<200;i++)
	{
		count=0;
		for(j=i-1;j!=-1;j--)
		{
		  
			if(y[i]>y[j])
			{
				count++;
			}
			else if(y[i]==y[j])
			{
				if(x[i]<x[j])
			    {
				    count++;
		        }
			}
			
		}
		if(count!=0)
		{
			int k;
			for(k=i;count!=0;count--)
			{
				swap(&y[k],&y[k-1]);
		        swap(&x[k],&x[k-1]);
		    k--;
			}

		}
		
	}
	
	for(i=0;i<200;i++){
	printf("(%d,%d)\n",x[i],y[i]);
	}
}

int selection_sort(int i){
	
	if(i==200)
	{
		return 0;
	}
	int ymax,j;
	ymax=i;
	for(j=i;j<200;j++)
	{
		if(y[j]>y[ymax])
		{
			ymax=j;	
		}
		else if(y[j]==y[ymax])
		{
			if(x[j]<x[ymax])
			{
				ymax=j;
			}
		}
	}
	swap(&y[i],&y[ymax]);
	swap(&x[i],&x[ymax]);
	printf("(%d,%d)\n",x[i],y[i]);
	selection_sort(i+1);
}

swap(int *a,int *b)
{
	int temp;
	temp= *a;
	*a= *b;
	*b= temp;
}

int main(void)
{
	int i,j;
	int select;
	int zero=0;
	srand(1);
	
	
	for(i=0;i<200;i++)
	{
			x[i]=(rand()%400-200);
			y[i]=(rand()%400-200);
			printf("(%d,%d)\n",x[i],y[i]);
    }
	file_open();
	
	printf("PLease select a way to have sorting : \n");
	printf("1.Bubble sort 2.Insertion sort 3.Selection sort\n");
	scanf("%d",&select);
	
	if(select==1)
	{
		bubble_sort(num);
	}
	else if(select==2)
	{
		insertion_sort();
	}
	else if(select==3)
	{
		selection_sort(zero);
	}
	else
	{
		printf("It is a wrong selection. Goodbye.");
		return 0;
	}
	
	
	return 0;
}
