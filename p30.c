//relation between 2D array and pointer

#include<stdio.h>

void main(){
	int arr[3][3]={1,2,3,4,5,6,7,8,9};

	printf("element at arr[%d][%d] is %d\n",0,0,arr[0][0]);
	printf("element at arr[%d][%d] is %d\n",1,0,arr[1][0]);
	printf("element at arr[%d][%d] is %d\n",2,1,arr[1][1]);

	printf("address of arr is %p\n",arr);
	printf("address of arr[0] is %p\n",arr[0]);
	printf("address of arr[1] is %p\n",arr[1]);
	printf("address of arr[2] is %p\n",arr[2]);

	printf("address at arr[0][0] is %p\n",&arr[0][0]);
	printf("address at arr[1][1] is %p\n",&arr[1][1]);
	printf("address at arr[2][0] is %p\n",&arr[2][0]);
}

