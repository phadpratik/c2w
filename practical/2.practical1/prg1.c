//wap chake wather the input is a leap year or not
#include<stdio.h>

void main(){
	int year;
	printf("enter year\n");
	scanf("%d",&year);

	if(year%4==0){	
		printf("this is leap year\n");
	}else if(year%4==1){
		printf("this is not leap year\n");
	}else{
		printf("wrong input\n");
	}
}
