// substraction of pointer

#include<stdio.h>

void main(){
	int arr[]={10,20,30,40};

	int *ptr=&arr[0];

	printf("%d\n",*ptr);
	printf("%d\n",*(ptr+2));
	}
