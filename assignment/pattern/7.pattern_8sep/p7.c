/*1  4  27
 *4  27 16
  27 16 125*/
 
#include<stdio.h>

void main(){
	int row;
	printf("enter row\n");
	scanf("%d",&row);

	int num=1;
	for(int i=1;i<=row;i++){
		num=i;
		for(int j=1;j<=row;j++){
			if(num%2==0){
				printf("%d\t",num*num);
			}else{
				printf("%d\t",num*num*num);
			}
			num++;
		}printf("\n");
		
	}
}
