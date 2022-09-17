//wap in which according to month no print the no of days in that month


 #include<stdio.h>

 void main(){
	 int month;
	 int year;
	 printf("enter month\n");
	 scanf(" %d",&month);
	 printf("enter year\n");
	 scanf(" %d",&year);

	 switch(month){
	 case 1:
		 printf("january has 31 days\n");
		 break;
	case 2:
		 if(year%4==0){
			 printf("feb has 29 days\n");
		}else{
			printf("feb has 28 days\n");
		}
		 break;
	case 3:
		 printf("march has 31 days\n");
		 break;
	case 4:
		 printf("april has 30 days\n");
		 break;
	case 5:
		 printf("may has 31 days\n");
		 break;
	case 6:
		 printf("june has 30 days\n");
		 break;
	case 7:
		 printf("july has 31 days\n");
		 break;
	case 8:
		 printf("august has 31 days\n");
		 break;
	case 9:
		 printf("saptember has 30 days\n");
		 break;
	case 10:
		 printf("oct has 31 days\n");
		 break;
	case 11:
		 printf("nov has 30 days\n");
		 break;
	case 12:
		 printf("dec has 31 days\n");
		 break;
	default:
		 printf("wrong input\n");
	 }
 }



