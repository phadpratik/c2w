/*1  4  3
 *16 5  36
  7  64 9*/

#include<stdio.h>

void main(){
	int row;
	printf("enter row\n");
	scanf("%d",&row);

	int num=1;

	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(num%2==0){
				printf("%d\t",num*num);
			}else{
				printf("%d\t",num);
			}num++;
		}printf("\n");
	}
}

