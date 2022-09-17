//wap to print composite no

#include<stdio.h>

int main(){
	int num1,num2;
	printf("enter num1\n");
	scanf("%d",&num1);

	printf("enter num2\n");
	scanf("%d",&num2);
	
	for(int j=num1;j<=num2;j++){
		int count=0;
		for(int i=1;i<=j;i++){
			if(j%i==0){
				count++;
			}
		}if(count>2){
			printf("%d\t",j);
		}
	}printf("\n");
}
