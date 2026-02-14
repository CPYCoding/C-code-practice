#include <stdio.h>


int main(void)
{
	int num = 557;
	
	int *p1 = &num;
	int *p3 = p1;
	
	printf("isis pointer 1 %d\n", *p3);
	printf("%d\n", *p1);
	
	int **p2 = &p1;
	
	printf("pointer in pointer value %d", **p2);
	
	return 0;
}
