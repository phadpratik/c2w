// wap to count no of odd and even no

#include<stdio.h>

void main(){
	int size;

	printf("enter size of array\n");
	scanf("%d",&size);

	int arr[size];

	for(int i=0;i<size;i++){
		printf("enter %d'th no\n",i);
		scanf("%d",&arr[i]);
	}

	int even=0,odd=0;
	for(int i=0;i<size;i++){
		if(arr[i]%2==0){
			even++;
		}else{
			odd++;
		}
	}
	printf("the count of even no's is %d\n",even);
	printf("and the count of odd no is %d\n",odd);
}


