//wap to print all even no in reverse order and odd no in the std way,both separarately,within the range

#include<stdio.h>

void main(){
	int no;
	int end;
	int x=0;
	int y;
	printf("enter no\n");
	scanf("%d",&no);
	printf("enter end\n");
	scanf("%d",&end);
	for(int j=no;j<=end;j++){
		int flag = 0;
		for(int i=2;i<j/2;i++){
			if(j%i==0){
				flag++;
			}
		}
		if(flag == 0){
			printf("%d, ",j);
		}
	}
}
