//wild pointer and NULL pointer

#include<stdio.h>

void main(){

	int x=10;
	int *iptr=&x;

	int *ptr;      //wild pointer 
	printf("address at iptr %p\n",iptr);   		//100
	printf("address at wild pointer %p\n",ptr);	//garbej value or 0 s hexa decimal or (nil)

	int *nptr=NULL;  //or 0
	
	printf("address at NULL pointer %p\n",nptr);	//0x0 or (nil)

	printf("value store at iptr %d",*iptr);		//10
	printf("value store at wild ptr %d",*ptr);	//(segmentation fault)core dump
	printf("value store at NULL ptr %d",*nptr);	//core dump
}
