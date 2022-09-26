#include<stdio.h>

void main(){
	int arr[]={10,20,30,40};
	int arr1[]={50,60,70,80};

	int *ptr1=arr+1;  //arr+1*DTP=100+1*4=104 (dtp=data type of pointer) 
	int *ptr2=&arr+1; //arr+1*whole array size=100+16=116

	printf("value at ptr1 is %d\n",*ptr1);//20
	printf("value at ptr2 is %d\n",*ptr2);//50
}
