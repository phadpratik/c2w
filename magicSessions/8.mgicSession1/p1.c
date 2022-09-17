//wap to print all divisors of given no
 
#include<stdio.h>

void main(){
	int num;
	printf("enter no\n");
	scanf("%d",&num);

	for(int i=1;i<=num/2;i++){
		if(num%i==0){
			printf("%d\t",i);
		}
	}printf("\n");
}


