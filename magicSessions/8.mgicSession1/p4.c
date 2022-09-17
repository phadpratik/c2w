// * _ _ _
// _ * _ _
// _ _ * _
// _ _ _ *

#include<stdio.h>

void main(){

	int row;
	printf("enter row no\n");
	scanf("%d",&row);

	for(int i=0;i<row;i++){
		for(int j=0;j<row;j++){
			if(i==j){
				printf("*\t");
			}else{
				printf("_\t");
			}
		}printf("\n");
	}
}
