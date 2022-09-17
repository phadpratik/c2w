#include<stdio.h>
void main(){
        int row;
        printf("enter row no\n");
        scanf("%d",&row);
	int ch=64+row;
        for(int i=1;i<=row;i++){
                for(int j=1;j<=i-1;j++){
                        printf("\t");
                       
                }for(int j=row;j>=i;j--){
                        printf("%c\t",ch);
                }
		ch--;
                printf("\n");
        }
}

