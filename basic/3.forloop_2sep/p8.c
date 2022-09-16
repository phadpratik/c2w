//wap take two bharacters as input and print all factors of that no

#include<stdio.h>
void main(){

	char ch2,ch1;
	
	printf("enter the 1st character\n");
	scanf(" %c",&ch1);
	printf("enter the 2nd character\n");
	scanf(" %c",&ch2);
	int ch3=0;
	for(int i=1;i<=26;i++){
		//if(ch1<ch2||ch1>ch2){
			if(ch1<ch2){
			ch3=ch2-ch1;
			}
			if(ch1>ch2){
			ch3=ch1-ch2;
			}
		}
	
	       	if(ch3>=1){
			printf("differance is %d\n",ch3);
		}else{
			printf("%c and %c are equals\n",ch1,ch2);
		}
}
	


