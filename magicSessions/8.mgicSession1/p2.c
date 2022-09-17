//wap to count no of digits of given no

#include<stdio.h>
void main(){
	int num;
	printf("enter no\n");
	scanf("%d",&num);

	int count=0;
	while(num > 0){
		num=num/10;
		count++;
		
	}
	printf("the no of digits are=%d\n",count);
}
