/*1   2   3   4
 *25  36  49  64
  9   10  11  12
  169 196 225 256*/

#include<stdio.h>

void main(){
	int row;
	printf("enter row\n");
	scanf("%d",&row);
	int num=1;

	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(i%2==0){
				printf("%d\t",num*num);
			}else{
				printf("%d\t",num);
			}
			num++;
		}printf("\n");
	}
}
