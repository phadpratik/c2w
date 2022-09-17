/* 0
 * 1 1
 * 2 3 5
 * 8 13 21 34*/

#include<stdio.h>
void main(){
	int row;
	printf("enter row no\n");
	scanf("%d",&row);
	int x=0;
	int y=1;
	
	for(int i=1;i<=row;i++){
		for(int j=1;j<=i;j++){
			printf("%d\t",x);
			x=y-x;
			y=x+y;
		}
		printf("\n");
	}
}
