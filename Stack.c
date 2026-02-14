#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *ptr;
};

struct node *top=NULL;

void push(int value)
{
    struct node *new;
	new=malloc(sizeof(struct node));
	new->data=value;
	new->ptr=NULL;
	new->ptr=top;
	top=new;
}

int pop()
{
	if(top==NULL)
	{
		printf("The stack is empty.");
		return -1;
	}
	int value;
	struct node *temp;
	temp=top;
	value=temp->data;
	top=top->ptr;
	free(temp);
	return value;
}

int main(void)
{
	push(11);
	push(12);
	
	pop();
	printf("%d",top->data);
	
	return 0;
}
