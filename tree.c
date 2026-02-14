#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct node{
	struct node *left;
	int data;
	struct node *right;
};
int insert_tree(struct node **ptr,int value)
{
	if((*ptr)==NULL)
	{
		(*ptr)=malloc(sizeof(struct node));
		if((*ptr)!=NULL)
		{
			(*ptr)->data=value;
			(*ptr)->left=NULL;
			(*ptr)->right=NULL;
		}
		else if(*ptr==NULL)printf("NO memory is available");
	}
	else
	{
		if(value<((*ptr)->data))
		{
			insert_tree(&((*ptr)->left),value);
		}
		else if(value>=((*ptr)->data))
		{
			insert_tree(&((*ptr)->right),value);
		}
	}
}
int inorder(struct node *ptr)
{
	if((ptr)!=NULL)
	{
		inorder((ptr)->left);
		printf("%d ",(ptr)->data);
		inorder((ptr)->right);
	}
}
int preorder(struct node *ptr)
{
	if((ptr)!=NULL)
	{
		printf("%d ",(ptr)->data);
		preorder((ptr)->left);
		preorder((ptr)->right);
	}
}
int postorder(struct node *ptr)
{
	if((ptr)!=NULL)
	{
		postorder((ptr)->left);
		postorder((ptr)->right);
		printf("%d ",(ptr)->data);
	}
}
int main(void){
	struct node *root=NULL;
	srand(time(NULL));
	int i=0;
	int array[10];
	for(i=0;i<10;i++)
	{
		array[i]=rand()%25+1;
		insert_tree(&root,array[i]);
		printf("%d\n",array[i]);
	}
	printf("in_order:");
	inorder(root);
	printf("\n");
	
	printf("pre_order:");
	preorder(root);
	printf("\n");
	
	printf("post_order:");
	postorder(root);
	printf("\n");
	return 0;
}

