//derefferancing of pointer

	#include<stdio.h>
	
	void main(){
		int x=10;

		int *ptr1=&x;
		int *ptr2=x;

		printf("value at address store in ptr1 is %d\n",*ptr1);	//10
		printf("value at address store in ptr2 is %d\n",*ptr2); //core dump (value at address 10 is out of process)
		}
