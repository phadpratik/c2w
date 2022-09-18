//wap to print array in reverse order

#include<stdio.h>

void main(){
	int size;
	printf("enter array size\n");
	scanf("%d",&size);

	int arr1[size];
	int arr2[size];

	for(int i=0;i<size;i++){
		printf("enter %dth element of array1\n",i);
		scanf("%d",&arr1[i]);
	}

	int rvs=size;
	for(int i=0;i<size;i++){
		arr2[i]=arr1[rvs-1];
		printf("%d'th element of array2 is %d\n",i,arr2[i]);
		rvs--;
	}
}
