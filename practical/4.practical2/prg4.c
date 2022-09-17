i//wap to print to take a no as input and print wether that is a prime

#include<stdio.h>

void main(){
	int no,Sno;
	int n=0;
	int y=0;
	
	printf("enter no\n");
	scanf("%d",&no);

	for(int i=sNo;i<=no;i++){
		if(no%i==0){
			n++;
		}else{
			y++;
		}
	}
	if(n>2){
		printf("%d is not prime no\n",no);
	}else{
		printf("%d is prime no\n",no);
	}

}
