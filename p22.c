//relation between array and pointer

#include<stdio.h>

void main(){
	int size;
	printf("enter size\n");
	scanf("%d",&size);

	int arr[size];

	for(int i=0;i<size;i++){
		printf("enter arr[%d] element\n",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<size;i++){
		printf("%d\n",*(arr+i));
	}
}
