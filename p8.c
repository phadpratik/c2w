  #include<stdio.h>

	void main(){
		char x='A';
		char y='B';
		char z='C';

		char *ptr=&x;

		printf("address at ptr is %p\n",ptr); //add of x
		printf("value at addres which store in ptr is %c\n",*ptr);  //A

		printf("value at addres which store in ptr+1 is %c\n",*(ptr+1));  //B
		printf("address at ptr+1 is %p\n",(1+ptr)); //add y

		printf("value at addres which store in ptr+2 is %c\n",*(ptr+2)); //C
		printf("address at ptr+2 is %p\n",(ptr+2)); //add of z
	}
