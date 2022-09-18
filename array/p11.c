#include<stdio.h>
void main(){
	int n,size;
	printf("enter the size of array\n");
	scanf("%d",&size);

	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter search no\n");
	scanf("%d",&n);

	int count=0;

	for(int i=0;i<size;i++){
		if(n==arr[i]){
			count++;
		}
	}
	if(count==0){
		printf("element is not present\n");
	}
		else{
			printf("element is present");
		}
}

