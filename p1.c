//pointer representation

#include<stdio.h>

void main(){

	int x=10;

	printf("value of x is %d\n",x);
	printf("address of x is %p\n",&x);

	int *ptr =&x;

	printf("address store in ptr %p\n",ptr);
}
