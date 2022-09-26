#include<stdio.h>

void main(){
	int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};

	printf("arr %p\n",arr);
	printf("value at arr %d\n",**arr);
	printf("&arr %p\n",&arr);
	printf("value at &arr %d\n",***(&arr));
	printf("arr[1] %p\n",arr[1]);
	printf("arr[1][2] %d\n",arr[1][2]);
}
