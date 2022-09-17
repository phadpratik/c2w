#include<stdio.h>

void main(){
        int num1,num2;
        printf("enter num1\n");
        scanf("%d",&num1);
        //printf("enter num2\n");
        //scanf("%d",&num2);
	int a=0;

        for(int i=1;i<=num1;i++){
                int ch=64+num1+(a/2);
		int chh=97+num1;
                for(int j=1;j<=num1;j++){
			if(i%2==0){
                        printf("%c\t",chh);
                        a=j;
				}else{
				printf("%c\t",ch);
				
			}ch--;
			chh--;
                }printf("\n");
        }
}

