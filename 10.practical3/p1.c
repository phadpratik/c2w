//wap to find the element in the array

#include<stdio.h>

void main(){
	int size;
	printf("enter size of array\n");
	scanf("%d",&size);

	int arr[size];

	for(int i=0;i<size;i++){
		printf("enter %d element\n",i);
		scanf("%d",&arr[i]);
	}

	int num;
	printf("enter element for searching\n");
	scanf("%d",&num);

	int flag=0;

	for(int i=0;i<size;i++){
		if(num==arr[i]){
			flag=1;
			break;
	}

	if(flag==1){
		printf("element %d is found\n",num);
	}else{
		printf("element %d is not found\n",num);
	}
}


