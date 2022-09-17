#include<stdio.h>

void main(){
	for(int i=1 ; i<=5 ;i++){
		for(int j=i ; j<5 ; j++){
			printf(" ");
		}
		for(int j=1 ; j<=i*2-1 ;j++){
			printf("*");
		}

		printf("\n");
	}
	for(int i=5; i>=1;i--){
		for(int j=5;j>i;j--){
			printf(" ");
		}
		for(int j=i*2-1;j>=1;j--){
			printf("*");
		}printf("\n");
	}
}
