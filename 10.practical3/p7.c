
#include<stdio.h>

void main(){
	int arr[6]={10,20,30,40,50,60};
	
	int *ptr1=&arr[0];	//value at arr[0] is 10
	int *ptr2=&arr[4];	//value at arr[4] is 50

	ptr1++; 		//suppose address at ptr1 is 100 then 100+1*size of data type i.e 4 so 100+1*4=104
	ptr2--;			//suppose address at ptr1 is 116 then 116-1*size of data type i.e 4 so 116-1*4=112


	printf("%d\t",*ptr1);	//value at ptr1 i.e value at address 104 is 20 
	printf("%d\t",*ptr2);	//value at ptr2 i.e value at address 112 is 40

	printf("%ld\n",ptr1-ptr2);  //ptr1-ptr2/size of data type i.e 104-112/4=-2


}
