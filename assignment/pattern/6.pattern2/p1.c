/* 4 3 2 1
 * 5 4 3 2
 * 6 5 4 3 
 * 7 6 5 4*/

#include<stdio.h>

void main(){
	int rows;
	printf("enter no of rows\n");
	scanf("%d",&rows);
	
	for(int i=1;i<=rows;i++){
		int num=3+i;
		for(int j=1;j<=4;j++){
			printf("%d\t",num);
			num--;
		}printf("\n");
	}
}

	

