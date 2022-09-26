#include<stdio.h>

void main(){
	int x=10;
	printf("value at x %d\n",x);
	int *iptr =&x;
	printf("value store at iptr is %d\n",*iptr);

	*iptr=30;

	printf("new value store at iptr is %d\n",*iptr);
}
