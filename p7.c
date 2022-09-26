//addition of pointer and int no 

#include<stdio.h>

void main(){
	int x=10;
	int y=20;

	int *ptr=&x;

	printf("value at address store in ptr %d\n",*ptr);   					//10
	printf("addition of value at address store in ptr and int no is %d\n",*ptr+1);		//11
	printf("addition of value at address store in ptr and int no is %d\n",*(ptr+1));	//20
}
