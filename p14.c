#include<stdio.h>

void main(){
	int arr[]={10,20,30,40};

	int *ptr=&(arr[0]);

	printf("address at ptr %p\n",ptr);		//100
	printf("value at address ptr++ %d\n",*ptr++);	//10
	printf("value at address ptr++ %d\n",*ptr++);	//20
	printf("latest address at ptr %p\n",ptr++);	//108
}
