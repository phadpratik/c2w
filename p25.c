//2D ARRAY

#include<stdio.h>

void main(){
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	/* 1 2 3
	 * 4 5 6
	 * 7 8 9*/
	
	int arr1[2][3]={1,2,3,4};
	/*1 2 3
	 *4 0 0 */

	int arr2[][3]={1,2,3,4,5,6,7,8,9};
	/*1 2 3 
	 *4 5 6
	  7 8 9 */

	//int arr3[3][]={1,2,3,4,5,6,7,8,9};   //error decleration of column must
	
	int arr4[][3]={{1,2,3},{4,5},{6}};
	/*1 2 3
	 *4 5 0
	  6 0 0*/

	int arr5[][3]={1,2,3,4,{5,6}};  //warning braces scalar initializer
	/*1 2 3
	 *5 6 0*/

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",arr[i][j]);
		}printf("\n");
	}printf("\n");

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",arr1[i][j]);
		}printf("\n");
	}
	
	printf("\n");

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",arr2[i][j]);
		}printf("\n");
	}

	printf("\n");
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",arr4[i][j]);
		}printf("\n");
	}

	printf("\n");
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",arr5[i][j]);
		}printf("\n");
	}
	
	
	
}

