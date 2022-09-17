/* 0   1   1   2
 * 3   5   8   13
 * 21  34  55  89
 * 144 233 377 610*/

#include<stdio.h>

void main(){
	int row;
	printf("enter row no\n");
	scanf("%d",&row);

	int num=0;
	int x=0;
	int y=1;

	for(int j=1;j<=row;j++){
		for(int i=1;i<=row;i++){
			printf("%d\t",num);
			x=y;
			y=num;
			num=x+y;
		}printf("\n");
	}
}
