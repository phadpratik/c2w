//wap to get 10 no from user and find their sum and avg

#include<stdio.h>

void main(){
	int no;
	float sum=0;
	
	for(int i=1;i<=10;i++){
		printf("enter no: \n");
		scanf("%d",&no);
		if(no>=0 || no<=0){
		sum=sum+no;
		}else{
		printf("wrong input\n");
		}
	}
	printf("sum of this no is %f\n avg of this no is %f\n",sum,sum/10);
}



