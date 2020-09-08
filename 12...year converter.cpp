//wap to convert year into months,minute,hours,seconds,days,using switch statement.
#include<stdio.h>
int main()	{
	int ch,yrs,month,day,min,hrs,sec,exit;
	printf("enter 1 for months.\n");
	printf("enter 2 for days.\n");
	printf("enter 3 for hours.\n");
	printf("enter 4 for minutes.\n");
	printf("enter 5 for seconds.\n");
	printf("enter 0 for exit.\n");
	printf("enter your choice:");
	scanf("%d",&ch);
	
	if (ch>0 && ch<6)	{
		printf("enter the year:");
		scanf("%d",&yrs);
	}
	month=yrs*12;
	day=month*30;
	day=day+yrs*5;
	hrs=day*24;
	min=hrs*60;
	sec=min*60;
	
		switch(ch)
		{
			case 1:
				printf("%d years have %d months",yrs,month);
				break;
			case 2:
				printf("%d years have %d days",yrs,day);
				break;
			case 3:
				printf("%d years have %d hours",yrs,hrs);
				break;
			case 4:
				printf("%d years have %d minutes",yrs,min);
				break;
			case 5:
				printf("%d years have %d seconds",yrs,sec);
				break;
			case 0:
				exit;
				break;
				
			default:
				printf("invalid choice.");
		}
	return 0;
}
