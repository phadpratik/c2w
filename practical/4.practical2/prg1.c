
//wap to find the sum of numbers that are not divisible by 3 up to a given number

#include<stdio.h>

void main(){
	int no;
	int sum=0;
	printf("enter no\n");
	scanf("%d",&no);

	for(int i = 1;i<=no;i++){
		if(i%3!=0){
			sum=sum+i;
		}
	}
	printf("sum is %d\n",sum);
}
