/*4 a 3 b
 *4 a 3 b
  4 a 3 b
  4 a 3 b*/

#include<stdio.h>
void main(){
	int row;
	printf("enter row no\n");
	scanf("%d",&row);
	
	for(int i=1;i<=row;i++){
		int num=row;
		char ch='a';
		for(int j=1;j<=row;j++){
			if(j%2==0){
				printf("%c\t",ch);
				ch++;
			}else{
				printf("%d\t",num);
				num--;
			}
		}printf("\n");
	}
}
