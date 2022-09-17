/*2  3  5
 *7  11 13
  17 19 23*/

#include<stdio.h>

void main(){
	int row;
	printf("enter row no\n");
	scanf("%d", &row);
	int num=2;

	for(int i=1;i<=row;i++){
		
		for(int j=1;j<=row;){
			int count=0;
			for(int k=2;k<=num/2;k++){
				if(num%k==0){
				count++;
				}
			}
			if(count == 0){
				printf("%d\t",num);
				j++;
			}
			num++;
		}printf("\n");
	}
}

