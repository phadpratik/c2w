/* 18 16 14 
 * 12 10 8  
 * 6  4  2*/

#include<stdio.h>
void main(){
	int row;
	printf("enter row \n");
	scanf("%d",&row);
	int num=2*(row*row);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			printf("%d\t",num);
			num-=2;
		}printf("\n");
	}
}
