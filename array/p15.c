#include <stdio.h>
void main(){
	int arr1[3] = {10,20,30};
	int arr2[3] = {10,20,30};

	int cnt = 0;
	for(int i=0; i<3 ;i++){
		if(arr1[i] == arr2[i])
			cnt++;
	}

	if(cnt == 3)
		printf("Array is EQUAL\n");
	else
		printf("Array is NOT EQUAL\n");
}
