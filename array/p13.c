//assigning array to array

#include<stdio.h>

void main(){
	int arr[3]={10,20,30};
	int arr1[3];

	for(int i=0;i<3;i++){
		printf("%d\n",arr[i]);
	}

//	arr=arr1;       //we can not assign array to array like this
	arr1[0]=arr[0];
	arr1[1]=arr[1];
	arr1[2]=arr[2];

	for(int i=0;i<3;i++){
		printf("%d\n",arr1[i]);
	}
}
