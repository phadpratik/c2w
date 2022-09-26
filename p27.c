#include<stdio.h>

void main(){
	int row,col;
	printf("enter row\n");
	scanf("%d",&row);
	printf("enter col\n");
	scanf("%d",&col);

	int arr[row][col];

	for (int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("enter arr[%d][%d] element\n",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for (int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d\t",arr[i][j]);
		}printf("\n");
	}
}
