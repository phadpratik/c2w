/* 1 1 1 1
   2 2 2 2
   3 3 3 3
   4 4 4 4*/

#include<stdio.h>
void main(){
	int num1,num2;
	printf("enter num1\n");
	scanf("%d",&num1);

	printf("enter num2\n");
	scanf("%d",&num2);

	for(int i=1;i<=num1;i++){
		for(int j=1;j<=num2;j++){
			printf("%d\t",i);
		}printf("\n");
	}
}
