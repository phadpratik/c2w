//wap that text a no from 0 to 5 and print its spelling,if the no is 5< then print enter no is greter than 5

#include<stdio.h>

void main(){
	int no;
	printf("enter no\n");
	scanf("%d",&no);

	printf("%c\n",no);
	printf("%d\n",no);
	if(no>=0){
	switch(no){
//		case 0:
			printf("zero\n");
			break;
		case 1:
			printf("one\n");
			break;
		case 2:
			printf("two\n");
			break;
		case 3:
			printf("three\n");
			break;
		case 4:
			printf("four\n");
			break;
		case 5:
			printf("five\n");
			break;
		default:
			printf("enter no is greter than 5\n");
			break;
	}
	}else if(no<0){
		printf("enter no is smaller than 0\n");
	} else{
		printf("wrong input\n");
	}
}
		


