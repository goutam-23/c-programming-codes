#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
    int randomvalue;
    int inp;
    while(1)
    {
    printf("enter your choice:\nenter 1 for snake.\nenter 2 for water.\nenter 3 for gun.\n enter:");
    scanf("%d",&inp);
    srand(time(NULL));
	randomvalue=(rand()  % 3) +1;
    printf("computers choice is %d\n",randomvalue);
    if (inp==1 && randomvalue==1) {
        printf("!!the choices are same.\n the game is tied...");
    }
    else if (inp == 1 && randomvalue ==2)
    {
        printf("you win\n");
    }
    else if (inp==1 && randomvalue==3)
    {
        printf("you lose\n");
    }
    

    if (inp==2 && randomvalue==1) {
            printf("you lose\n");
    }
    else if (inp == 2 && randomvalue ==2)
    {
        printf("!!the choices are same\n the game is tied...");
    }
    else if (inp==2 && randomvalue==3)
    {
        printf("you win\n");
    }


    if (inp==3 && randomvalue==1) {
        printf("you win\n");
    }
    else if (inp == 3 && randomvalue ==2)
    {
        printf("you lose\n");
    }
    else if (inp==3 && randomvalue==3)
    {
        printf("!!the choices are same\n the game is tied...");
    }
    else if (inp>3)
    {
        printf("!!invalid input..you have to choose in b/w 1,2,3 \n try again..\n");
    }
}
    return 0;
}
