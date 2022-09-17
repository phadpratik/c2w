//wap to take two characters,if this two characters are equals then print them as it is but if they are are differnt then print them  difference

#include<stdio.h>

void main(){
	char ch1,ch2;
	printf("enter char1 &char2\n");
	scanf("%c",&ch1);
	scanf(" %c",&ch2);
	
	if(ch1==ch2){
		printf("%c = %c\n",ch1,ch2);
	}else{
		if(ch1>ch2){
			int ch3=ch1-ch2;
			printf("differnce is %d\n",ch3);
		}else{
			int ch4=ch2-ch1;
			printf("differnce is %d\n",ch4);
		}
	}
}


