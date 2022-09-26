//imp

#include<stdio.h>

void main(){
	int arr[]={10,20,30,40};
	int arr1[]={50,60,70,80};

	int *ptr=&arr;
	int *ptr1=arr;
	
	ptr++;
	ptr1++;

	printf("value at ptr after ++ is %d\n",*ptr);
	printf("value at ptr1 after ++ is %d\n",*ptr1);
}
