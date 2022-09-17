#include <stdio.h>

void main(){
	int x;
	printf("Enter Row : ");
	scanf("%d",&x);

	for(int i=0 ; i<x ; i++){
		int ch = 64+x+i;
		int ch1 = 96+x+i;
		for(int j=0 ; j<4 ;j++){
			if((i+j) % 2 == 0)
				printf("%c\t",ch);
			else
				printf("%c\t",ch1);

			if(i % 2 == 0){
				ch++;
				ch1++;
			}else{
				ch--;
				ch1--;
			}
		}

		printf("\n");
	}
}
