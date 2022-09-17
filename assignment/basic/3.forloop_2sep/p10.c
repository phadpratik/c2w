//wap to print the no in given range and their multiplicative inverse 

#include<stdio.h>
void main(){
	int num1,num2;
	printf("enter no\n");
	scanf("%d",&num1);
	printf("enter no\n");
	scanf("%d",&num2);

	for(float i=num1;i<=num2;i++){
		float a;
		a=1/i;
		printf("%f\t",a);
	}printf("\n");
}
