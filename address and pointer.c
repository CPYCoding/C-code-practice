#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a=5;
	int *pointer = NULL;
	pointer=&a;
	
	printf("value %d\n",a);
	printf("address of value %p\n",&a);
	printf("The value of the address %d\n\n",*&a);
	
	printf("address of value in pointer %p\n",pointer);
	printf("address of pointer %p\n",&pointer);
	printf("the value in the pointer %d",*pointer);
	
	
	
	return 0;
}
