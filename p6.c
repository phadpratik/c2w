

	#include<stdio.h>

	void main(){
		int x=10;
		int y=20;

		int *ptr1=&x;
		int *ptr2 =&y;

		printf("addition of value at ptr1 and value at ptr2 is %d\n",(*ptr1)+(*ptr2));
	//	printf("addition of value at (ptr1 + ptr2) is %d\n",*(ptr1+ptr2));   //error(invalid operand)
	//	printf("addition of ptr1 and ptr2 is %d\n",ptr1+ptr2);   //error(invalid operand)  addition of two pointer is not allowed
	}
