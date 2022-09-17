//take an input print sum of digit

#include<stdio.h>

void main(){
	int num;
	int count=0;
	int rem =0;
	printf("enter no\n");
	scanf("%d",&num);

	while(num!=0){
		rem=num%10;
		count=count+rem;
		num=num/10;
	}
	printf("addition is %d ",count);
}
