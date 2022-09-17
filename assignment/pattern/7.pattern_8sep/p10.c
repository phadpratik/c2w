/* D1 C2 B3 A4
 * e5 f4 g3 h2
 * F3 E4 D5 C6
 * g7 h6 i5 j4*/

#include<stdio.h>

void main(){
	int row;
	printf("enter row\n");
	scanf("%d",&row);
	int ch=64+row;
	int x=64+row;
	int chh=97+row;

	

	for(int i=1;i<=row;i++){
		if(i%2!=0){
		ch=x;
		}
		for(int j=1;j<=row;j++){
			if(i%2!=0){
				printf("%c\t",ch);
				ch--;
			}else{
				printf("%c\t",chh);
				chh++;
			}
		}printf("\n");
		if(i%2!=0){
			 x=ch;
			x=x+row+2;
		}
	
	}
}


