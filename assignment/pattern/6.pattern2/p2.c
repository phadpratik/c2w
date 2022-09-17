/* 3 2 1
 * c b a
 * 3 2 1
 * c b a*/

#include<stdio.h>

void main(){
	int rows;
	
	printf("enter rows\n");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int num=rows;
		int ch=96+rows;
		for(int j=1;j<=rows;j++){
			if(i%2!=0){
			printf("%d\t",num);
			num--;
			}else{
			printf("%c\t",ch);
			ch--;
			}
		}printf("\n");
	}
}

