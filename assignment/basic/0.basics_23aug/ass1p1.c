
#include<stdio.h>

void main(){
	int num;
	char x;
	float rs;
	double rsmoney;

	printf("enter number\n");
	scanf("%d",&num);
	printf("%ld\n",sizeof num);

	printf("enter character: \n");
	scanf(" %c",&x);
	printf("%ld\n",sizeof x);

	printf("enter rs: \n");
	scanf("%f",&rs);
	printf("%ld\n",sizeof rs);

	printf("enter rsmoney \n");
	scanf("%lf",&rsmoney);
	printf("%ld\n",sizeof rsmoney);
}
