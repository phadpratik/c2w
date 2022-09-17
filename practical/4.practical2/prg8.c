//wap print product

#include<stdio.h>

void main(){
	int num;
	int rem;
	int prod=1;
	printf("enter num\n");
	scanf("%d",&num);
	int x=num;

	while(num != 0){
		rem=num%10;
		prod=prod*rem;
		num=num/10;
	}
	printf("%d product is %d",x,prod);
}

