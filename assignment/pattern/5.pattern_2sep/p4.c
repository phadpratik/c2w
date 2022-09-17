/* A B C D
   E F G H
   I J K L*/

#include<stdio.h>
void main(){
	char ch='A';
	int num1,num2;
	printf("enter num1\n");
	scanf("%d",&num1);

	printf("enter num2\n");
	scanf("%d",&num2);

	for(int i=1;i<=num1;i++){
		for(int j=1;j<=num2;j++){
			printf("%c\t",ch);
			ch++;
		}printf("\n");
	}
}
