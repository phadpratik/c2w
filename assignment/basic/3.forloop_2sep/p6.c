//wap to calculate factorial of no

#include<stdio.h>

void main(){
	int num;
	int factorial=1;
	printf("enter no: \n");
	scanf("%d",&num);

	for(int i=1;i<num;i++){
		int j=i;
		printf("%d*",i);
		factorial=factorial*i;
	}
	factorial=factorial*num;
	printf("%d=%d\n",num,factorial);
}
