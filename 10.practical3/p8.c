#include<stdio.h>

void main(){
	char arr[5]={'A','B','C','D','E'};
	
	char *ptr=&arr[2];	//address at ptr is address of arr[2] element
	(*ptr)++;		//value at ptr is C and increment of C is D
	ptr=ptr+2;

	printf("%c\n",*ptr);	//D

	for(int i=0;i<5;i++){			//A B D D E
		printf("%c\t",arr[i]);
	}
}
