#include<stdio.h>
void main(){
	int num1,num2;//flag=0;
	printf("Enter starting number\n");
	scanf("%d",&num1);
	printf("Enter second number\n");
	scanf("%d",&num2);
	for(int i=num1;i<=num2;i++){
		for (int j=2;j<=i/2;j++){
			if (i%j==0){
				int flag;
				flag++;
			}else{
				printf("%d ",i);
				break;
			}
		
		}
	}
}
