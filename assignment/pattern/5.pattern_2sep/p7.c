/* 1  2  9   4
   25 6  36  8
   81 10 121 12*/

#include<stdio.h>

void main(){
	int num=1;
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			if(num%2==0){
				printf("%d\t",num);
			}else{
				printf("%d\t",num*num);
			}
			num++;
		}printf("\n");
	}
}
