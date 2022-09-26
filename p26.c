#include<stdio.h>

void main(){
	int arr[2][3];

	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("enter arr[%d][%d] element\n",i,j);
			scanf("%d",&arr[i][j]);
		}
	}

	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",arr[i][j]);
		}printf("\n");
	}
}
