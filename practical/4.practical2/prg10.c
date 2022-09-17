//febonacci

#include<stdio.h>

void main(){
	int i = 4,x = 0,y = 1,ans = 0,input;
	printf("enter input\n");
	scanf("%d",&input);

	while(i <= input){
		printf("%d, ",ans);
		x=y;
		y=ans;
		ans=x+y;
		i++;
	}
}
		

