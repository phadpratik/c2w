#include<stdio.h>

void main(){
	int arr[]={10,20,30,40};

	int *ptr1 = &(arr[0]);
	int *ptr2 = &(arr[1]);

	printf("ptr1++ %d\n",*(ptr1++));
	printf("++ptr1 %d\n",*(++ptr1));
}
