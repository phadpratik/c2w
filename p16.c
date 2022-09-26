//void pointer


#include<stdio.h>

void main(){
	int x=10;
	int *iptr=&x;
	void *vptr=&x;

	printf("the address at int ptr is %p\n",iptr);	//100
	printf("the address at void ptr is %p\n",vptr);	//100

	printf("the vlue at address at int ptr is %d\n",*iptr);	//10
	//printf("the value address at void ptr is %d\n",*vptr);	//error(we can't access void pointer like this)

	printf("the value address at void ptr is %d\n",*(int*)vptr);	//for derefer void pointer declear data's data type
}
	



