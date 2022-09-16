//wap to print the sum of 1st 10 odd no

#include<stdio.h>

void main(){
	int sum=0;
	for(int i=1;i<=20;i++){
		if(i%2==1){
			sum=sum+i;
		}
	}
	printf("%d\n",sum);
}
