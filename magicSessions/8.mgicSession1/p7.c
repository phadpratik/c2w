//E D C B A
//E D C B
//E D C
//E D
//E

#include<stdio.h>

void main(){

	int row;
	printf("enter row\n");
	scanf("%d",&row);

	for(int i=0;i<row;i++){
		int ch=64+row;
		for(int j=row-1;j>=i;j--){
			printf("%c\t",ch);
			ch--;
		}printf("\n");
	}
}
