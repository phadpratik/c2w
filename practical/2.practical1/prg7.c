//wap to chake wether the given input is pythogorian triplet or not

#include<stdio.h>

void main(){
	int side1,side2,side3;
	printf("enter side1\n");
	scanf("%d",&side1);
	printf("enter side2\n");
	scanf("%d",&side2);
	printf("enter side3\n");
	scanf("%d",&side3);
	if((side1*side1)==(side2*side2)+(side3*side3)){
		printf("this is pythogorian triplet\n");
	}else{
		printf("given triplet is not pythogorian\n");
	}
}
