 //wap to print all even no in reverse order and odd no in standerd order in a range
 
#include<stdio.h>

void main(){
	int a,b;
	printf("enter a first no\n");
	scanf("%d",&a);
	printf("enter a second no\n");
	scanf("%d",&b);
	
	printf("even no:\t");
	for(int i=b;i>=a;i--){
		if(i%2==0){
			printf("%d\t",i);
		}
	}
	printf("\n");

	printf("odd no:\t");
	for(int i=a;i<=b;i++){
		if(i%2!=0){
			printf("%d\t",i);
		}
	}
	printf("\n");
}
