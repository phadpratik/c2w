//wap to swap two no using pointer

#include<stdio.h>

void main(){
	int x=10;
	int y=20;

	int *ptr1=&x;
	int *ptr2=&y;
	
	printf("value of x is %d \n",x);
	printf("value of y is %d \n",y);

	*ptr1 = *ptr1+*ptr2;
       *ptr2 = *ptr1-*ptr2;
	*ptr1 = *ptr1 - *ptr2;       

	printf("value of x is %d \n",x);
	printf("value of y is %d \n",y);
}

