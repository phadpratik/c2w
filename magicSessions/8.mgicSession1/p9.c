#include<stdio.h>
void main(){
        int row;
        printf("enter row no\n");
        scanf("%d",&row);

        for(int i=1;i<=row;i++){
		for(int j=row-1;j>=i;j--){
			printf("\t");
		}int x=1;
                for(int j=1;j<=i;j++){
                        printf("%d\t",x);
			x++;
                }
                printf("\n");
        }
}

