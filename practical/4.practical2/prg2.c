//wap to print the addition of 1 to 10 with 10 to 1

#include<stdio.h>

void main(){
	int sum = 0;
	int i=1;
	int j;
	for(int j =10;j>=1;j-- ){
			sum=i+j;
			printf("%d + %d = %d\n",i,j,sum);
			i++;
		}
	
}
