


	#include<stdio.h>

	void main(){
		double x=30.5;
		char y='A';

		double *ptr1=&x;
		char *ptr2 =&y;

		printf("address store in ptr1 is %p\n",ptr1);
		printf("address store in ptr2 is %p\n",ptr2);

		printf("value of address store in ptr1 is %lf\n",*ptr1);
		printf("value of address store in ptr2 is %c\n",*ptr2);

	}
