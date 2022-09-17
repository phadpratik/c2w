//wap find maximum no amoung three no

 #include<stdio.h>

 void main(){
	 int num1,num2,num3;
	 printf("enter no 1\n");
	 scanf("%d",&num1);

	 printf("enter no 2\n");
	 scanf("%d",&num2);

	 printf("enter no 3\n");
	 scanf("%d",&num3);

	 if(num1>num2){
		 if(num1>num2 && num2>num3){
			 printf("num1>num2>num3\n");
		 }else if(num3>num2){
			 printf("num1>no3>no2\n");
		 }else{
			 printf("num1>no2=no3\n");
	 }else if(num1=num2){
		 if(num1>num3){
			 printf("num1=num2>num3\n")
		else if(num1<num3)
	else if(num2>num3){
			if(num1>num3){
			       printf("num2>num1>num3\n");
			}else{
		 		printf("num2>num3>num1\n");
			}
	}
	else if(num3>num2){
			if(num1>num2){
				printf("num3>num1>num2\n");
			}else{
				printf("num3>num2>num1\n");
			}
	}
	else{
		printf("wrong input\n");
		}
}		
