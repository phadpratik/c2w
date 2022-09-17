/*= = = = = =
  $ $ $ $ $ $
  @ @ @ @ @ @
  = = = = = =
  $ $ $ $ $ $
  @ @ @ @ @ @*/

#include<stdio.h>

void main(){
	int row;
	printf("enter row\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(i%3==1){
				printf("=\t");
			}if(i%3==2){
				printf("$\t");
			}if(i%3==0){
				printf("@\t");
			}
		}printf("\n");
	}
}

