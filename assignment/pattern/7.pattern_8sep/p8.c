/* 16 15 14 13
 * L  K  J  I
 * 8  7  6  5
 * D  C  B  A*/

#include<stdio.h>

void main(){
	int row;
	printf("enter row \n");
	scanf("%d",&row);

	int num=row*row;
	int ch=64+row*row;

	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(i%2!=0){
				printf("%d\t",num);
			}else{
				printf("%c\t",ch);
			}
			num--;
			ch--;
		}printf("\n");
	}
}
