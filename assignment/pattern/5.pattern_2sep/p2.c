/*
 * 1 2 3
   a b c
   1 2 3 
   a b c
   */

#include<stdio.h>

void main(){
	int a, b;
	scanf("%d",&a);
	scanf("%d",&b);

	for(int i =1;i<=a;i++){
		char ch='a';
		int x=1;
		for(int j=1;j<=b;j++){
			if(i%2==0){
				//char ch='a';
			printf("%c\t",ch);
			ch++;
			}else{
				//int x=1;
				printf("%d\t",x);
				x++;
			}
		}
		printf("\n");
	}
}
