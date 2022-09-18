#include<stdio.h>

void main(){
	int sum=0;
	 for(int i=1;i<=5;i++){
		 int em;
		 printf("enter emp%d sal\n",i);
		 scanf("%d",&em);
		 sum+=em;
	 }
	 printf("%d\n",sum);
}

