/* 3 b 1 d
 * a 2 c 0
 * 3 b 1 d
 * a 2 c 0*/
#include<stdio.h>

void main(){
	for(int i=1;i<=4;i++){
		int num=4;
		char ch='a';
		for(int j=1;j<=4;j++){
			if(i%2==0){
				if(j%2==0){
					printf("%d\t",num);
				}
				else{
					printf("%c\t",ch);
				}
			}else{
				if(j%2==0){
					printf("%c\t",ch);
				}else{
					printf("%d\t",num);
				}
			}
			ch++;
			num--;
		}printf("\n");
	}
}


