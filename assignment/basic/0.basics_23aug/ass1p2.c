
#include<stdio.h>

void main(){
	int x=9;
	int ans;
	ans=++x + x++ + ++x;
	printf(" x =%d \n",x);
	printf(" ans =%d \n",ans);

	int ans1;
	ans1=++x + ++x + ++x + ++x;
	
	printf(" x =%d \n",x);
	printf(" ans1 =%d \n",ans1);

	int ans2;
	ans2=x++ + x++ + ++x + x++ + ++x;

	printf(" x =%d \n",x);
	printf(" ans2 =%d \n",ans2);

	int ans3;
	ans3=x++ + x++ + x++ + x++;

	printf(" x =%d \n",x);
	printf(" ans3 =%d \n",ans3);
}
