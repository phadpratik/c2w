#include<stdio.h>

void main(){
	int size;
	printf("enter arr size\n");
	scanf("%d",&size);

	int arr[size];

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int flag=0;
	for(int i=0;i<size;i++){
		if(arr[i]%4==0&&arr[i]%5==0){
			flag=1;
		}
	}
	if(flag==1){
		printf("arr[%d] is divisible by 4 and 5\n",size);
	}else{
		printf("arr[%d] is not divisible by 4 and 4\n",size);
	}
}

