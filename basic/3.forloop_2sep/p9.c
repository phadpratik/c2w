//wap a program to find squre root of range btn 100 to 300

#include<stdio.h>

void main(){
	float range1,range2;
	float num;
	printf("enter range\n");
	scanf("%f",&range1);
	scanf("%f",&range2);
	for(float i=range1;i<=range2;i++){
		num=i;
		for(int j=1;j<=10;j++){
			num=(num+i/num)/2;
		}
		printf("%f=%f\n",i,num);
	}
}
