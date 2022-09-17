//wap to print the divisors & count of devisors of the enterd no

#include<stdio.h>

void main(){
	int sum=0;
	int no=0;
	int count=0;

	printf("enter no\n");
	scanf("%d",&no);
	printf("the divisors are:");

	for(int i=1;i<=no;i++){
		if(no%i==0){
			printf("%d\t",i);
			count++;
			sum=i+sum;
			
		}
	}
	printf("\n");
	printf("sum is %d\n",sum);
	printf("count is %d\n",count);
}
