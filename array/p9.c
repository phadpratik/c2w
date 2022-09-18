#include<stdio.h>

void main(){
	int arr[5];
	int count=0;
	//int n = arr.size();
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++){
		if(arr[i]%2==0){
			count++;
		}
	}
	printf("%d\n",count);
}
