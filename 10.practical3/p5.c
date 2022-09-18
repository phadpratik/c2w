#include<stdio.h>

void main(){
	int x=10;
	int *ptr =&x;
	char *cptr =&x;

	printf("value at ptr is %d\n",*ptr);  	//10
	printf("value at cptr is %d\n",*cptr);	//10
}
