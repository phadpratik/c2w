

  #include<stdio.h>

  void main(){

	  int x=10;

	  int *ptr1=x;
	  int *ptr2=&x;

	  printf("address store in ptr1 is %p\n",ptr1);    //0xa
	  printf("address store in ptr2 is %p\n",ptr2);    //address of x
  }
