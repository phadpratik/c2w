#include<stdio.h>

void main(){
	char ch;
	printf("enter character\n");
	scanf(" %c",&ch);

	if(ch>=97 && ch<=122){
		printf(" %c is lowercase",ch);
	} else {
		printf(" %c is UPPERcase",ch);
	}
}


