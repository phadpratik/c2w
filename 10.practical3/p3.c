//wap to add two array's element to print 3rd array


#include<stdio.h>

void main(){
	int size1,size2;
	printf("enter size of array1\n");
	scanf("%d",&size1);

	printf("enter size of array2\n");
	scanf("%d",&size2);

	int arr1[size1];
	int arr2[size2];
	
	int size=0;
	if(size1>size2||size1==size2){
		size=size1;
	}else{
		size=size2;
	}

	for(int i=0;i<size;i++){
		printf("enter arr1 %dth element\n",i);
		scanf("%d",&arr1[i]);
		printf("enter arr2 %dth element\n",i);
		scanf("%d",&arr2[i]);
	}
	
	
	int arr3[size];
	for(int i=0;i<size;i++){
		arr3[i]=arr1[i]+arr2[i];
		printf("%dth element of arr3 is %d\n",i,arr3[i]);
	}
}

