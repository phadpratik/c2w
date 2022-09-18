#include<stdio.h>

void main(){
	int x=10;
	char y='a';

	int arr[3]={10,20,30};

	printf("%d\n",x);
	printf("%p\n",&x);
//	printf("%d\n\n",&x);

	printf("%c\n",y);
	printf("%p\n",&y);
//	printf("%c\n\n",&y);

	printf("%d\n",arr);
	printf("%p\n",&arr);
//	printf("%d\n",&arr);
}
