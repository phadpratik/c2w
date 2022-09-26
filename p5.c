

	#include<stdio.h>

	int a=10;
	char b='A';

	void main(){
		float c=10.5;
		double d=37.789;

		int *ptr1=&a;
		char *ptr2=&b;
		float *ptr3=&c;
		double *ptr4=&d;

		printf("address store at ptr1 is %p\n",ptr1);
		printf("address store at ptr2 is %p\n",ptr2);
		printf("address store at ptr3 is %p\n",ptr3);
		printf("address store at ptr4 is %p\n",ptr4);

		printf("value in address store at ptr4 is %d\n",*ptr1);
		printf("value in address store at ptr4 is %c\n",*ptr2);
		printf("value in address store at ptr4 is %f\n",*ptr3);
		printf("value in address store at ptr4 is %lf\n",*ptr4);
	}
