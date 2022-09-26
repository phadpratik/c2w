#include<stdio.h>

void main(){

	int arr[]={10,20,30,40};

	int *iptr=&arr[0];

	printf("value store at iptr is %d\n",*iptr);

	iptr++;
	*iptr=70;

	for(int i=0;i<4;i++){
		printf("value at arr[%d] is %d\n",i,arr[i]);
	}
}
