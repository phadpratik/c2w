/* D4 C3 B2 A1
   D4 C3 B2 A1
   D4 C3 B2 A1
   D4 C3 B2 A1*/

#include<stdio.h>

void main(){
	int row;
	int column;

	printf("enter row\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
			int x=1+row-1;
			char ch='A'+row-1;
		for(int j=1;j<=row;j++){
			printf("%c%d\t",ch,x);
			ch--;
			x--;
		}printf("\n");
	}
}
