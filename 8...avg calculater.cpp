/*find the avg mark of six subjects of a student as per given table and show the devision.
avg					result
>34 & <50			third div
>49 & <60			2nd div
>60 & <75			1st div
>75 & <100			distinction
<35					fail
*/
#include<stdio.h>
int main()	{
	int phy,chem,mth,eng,sc,gsc,avg;
	printf("enter secured mark in physics:");
	scanf("%d",&phy);
	printf("enter secured mark in chemistry:");
	scanf("%d",&chem);
	printf("enter secured mark in mah:");
	scanf("%d",&mth);
	printf("enter secured mark in english:");
	scanf("%d",&eng);
	printf("enter secured mark in science:");
	scanf("%d",&sc);
	printf("enter secured mark in general science:");
	scanf("%d",&gsc);
	int sum=phy+chem+mth+eng+sc+gsc;
	printf("total mark is %d\n",sum);
	avg=sum/6;
	printf("the avg mark of 6 subjects is:%d\n",avg);
	
	if (phy<35 || chem<35 || mth<35 || eng<35 || sc<35 || gsc<35){
		printf("you are failed in exam.\n");
	}
	else if (avg>34 && avg<50)	{
		printf("division:third");
	}
	else if (avg>49 && avg<60)	{
		printf("division:second");
	}
	else if (avg>60 && avg<75)	{
		printf("division:first");
	}
	else if (avg>75 && avg<100)	{
		printf("division:distinction");
	}
	return 0;
}

