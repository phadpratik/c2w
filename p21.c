//dangling pointer

#include<stdio.h>


int a =10;
int b;
int *ptr=0;

int fun(){
	int x=40;
	printf("value of x is %d\n",x);
	printf("value of x is %d\n",a);
	printf("value of x is %d\n",b);

	ptr=&x;
	printf("address at ptr %p\n",ptr);
	printf("value store at address ptr %d\n",*ptr);
}
void main(){
	int y=50;
	fun();
	
	printf("value store at address ptr %d\n",*ptr);	//dangling pointer
}


