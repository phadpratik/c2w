#include<stdio.h>

void main(){
	int x=10;
	int y=20;

	int *ptr=&x;

	printf("address at ptr %p\n",ptr);
	printf("value at address store in ptr %d\n",*ptr);

	printf("%p\n",ptr+1.5);   //error
	printf("%d\n",*(ptr+1.5); //error
	}
