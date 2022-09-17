//wap to take the noinput and print all factors of that no

#include<stdio.h>

void main(){
	int num;
	printf("enter no:\n");
	scanf("%d",&num);
	for(int i = 1;i<=num;i++){
		if(num%i==0){
			printf("%d\t",i);
		}
	}printf("\n");
}

