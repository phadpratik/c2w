/*1   3   8
 *15  24  35
  48  63  80*/

#include<stdio.h>
void main(){
	int row;
	printf("enter row \n");
	scanf("%d",&row);
	int num=1;

	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(num==1){
				printf("%d\t",num);
			}else{
			printf("%d\t",num*num-1);
			}
			num++;
		}printf("\n");
	}
}
