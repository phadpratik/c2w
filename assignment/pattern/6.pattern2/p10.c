/*
 * D4 C3 B2 A1
 * A1 B2 C3 D4
 * D4 C3 B2 A1
 * A1 B2 C3 D4*/

#include<stdio.h>

void main(){
	int row;
	printf("enter row\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		int no=1;
		int ch=65;
		int noo=row;
		int chh=64+row;
		for(int j=1;j<=row;j++){
			if(i%2==0){
				printf("%c%d\t",ch,no);
				ch++;
				no++;
			}else{

				printf("%c%d\t",chh,noo);
				chh--;
				noo--;
			}
		}printf("\n");
	}
}
				

