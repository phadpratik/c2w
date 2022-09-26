#include<stdio.h>

void main(){

	int x=10;
	int y=20;

	printf("value at x %d\n",x);  	//10
	printf("value at y %d\n",y);	//20

	x=y;

	printf("value at x %d\n",x);	//20
	printf("value at y %d\n",y);	//20
}
