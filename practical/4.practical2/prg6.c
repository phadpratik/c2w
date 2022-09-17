//wap to count the no of digit

#include<stdio.h>

void main(){
	int num;
	int count=0;
	printf("Enter no\n");
	scanf("%d",&num);
	int no=num;

	while(num!=0){
		num=num/10;
		count++;
		
	}
	printf("%d no have %d digits",no,count);
}
		
