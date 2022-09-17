// wap a program that takes the angels of triangles from the users and print wether that angles are valid or not

#include<stdio.h>

void main(){
	int ang1,ang2,ang3;
	printf("enter angle1\n");
	scanf("%d",&ang1);
	printf("enter angle2\n");
	scanf("%d",&ang2);
	printf("enter angle3\n");
	scanf("%d",&ang3);

	if(ang1+ang2+ang3==180){
		printf("this is triangle\n");
	}else{
		printf("this is not triangle\n");
	}
}
