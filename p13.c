#include<stdio.h>

void main(){
	int arr[]={10,20,30,40};

	int *ptr=&(arr[0]);
	ptr++;
	printf("ptr= %d\n",*ptr);

	++ptr;

	printf("ptr= %d\n",*ptr);
}
