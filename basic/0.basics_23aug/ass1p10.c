
#include<stdio.h>

void main(){
	char var;
	printf("enter variable\n");
	scanf(" %c",&var);

	if(var=='A'||var=='E' || var=='O' || var=='I' || var=='U'){
		printf("vowel\n");
	}else{
		printf("consonant\n");
	}
}
