

 #include<stdio.h>
  void main(){
	int arr1[]={10,20,30,40,50};
	int arr2[]={70,70,80,90,100};

	int *ptr1=NULL;
	int *ptr2=NULL;

	 ptr1=arr1+3; // address at ptr1 is 100+3*size of data type = 100+3*4 =112
	 ptr2=arr2+2; // address at ptr2 is 200+2*4=208
	
	 *ptr1=35;   //value at ptr = 35 i. value at 112 =35
	
	 for(int i=0;i<5;i++){
		 printf("%d\t",arr1[i]);  	//10 20 30 35 50
	 }

	 for(int i=0;i<5;i++){
		 printf("%d\t",arr2[i]);	//70 70 80 90 100
	 }
}


