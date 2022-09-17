/*a B c D
 *b C d E
  c D e F
  d E f G*/

#include<stdio.h>

void main(){
	int row;
	printf("enter row\n");
	scanf("%d",&row);
	char ch='a';
	char chh='A';

	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(j%2==0){
			printf("%c\t",chh);
			}else{
				printf("%c\t",ch);
			}
			ch++;
			chh++;
		}printf("\n");
	}
}
