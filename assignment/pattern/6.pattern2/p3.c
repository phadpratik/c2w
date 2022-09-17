/*4 4 4 4
 *3 3 3 3
  2 2 2 2
  1 1 1 1*/

#include<stdio.h>

void main(){
	int rows;
	printf("enter rows\n");
	scanf("%d",&rows);
	int num=rows;
	for(int i;i<=rows;i++){
		
		for(int j=1;j<=rows;j++){
			printf("%d\t",num);
		}printf("\n");
		num--;
	}
}
			
