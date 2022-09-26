#include<stdio.h>

void main(){
	int row,col;

	printf("enter row\n");
	scanf("%d",&row);

	printf("enter col\n");
	scanf("%d",&col);

	int arr[row][col];
	int sum=0;

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("enter arr[%d][%d] element\n",i,j);
			scanf("%d",&arr[row][col]);
			sum =sum+arr[row][col];
		}
	}
	printf("the addition of all elements array is %d\n",sum);
}
