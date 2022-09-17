/* D C B A
 * e d c b
 * F E D C
 * g f e d*/

#include<stdio.h>

void main(){
	int row;
	printf("enter row no\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		int lc=95+row+i;
		int UC=63+row+i;
		for(int j=1;j<=row;j++){
			if(i%2==0){
			printf("%c\t",lc);
			lc--;
			}else{
				printf("%c\t",UC);
				UC--;
			}
		}printf("\n");
	}
}
