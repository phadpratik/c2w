//wap to print sum of no which are divisible by 5 in given range

#include<stdio.h>
void main(){
	int a,b;
	printf("enter 1st no\n");
	scanf("%d",&a);
	
	printf("enter 2nd no\n");
	scanf("%d",&b);

	int sum=0;
	
	for(int i =a;i<=b;i++){
		if(i%5==0){
			sum=sum+i;
		}
	}
	printf("sum %d\t \n",sum);
}
