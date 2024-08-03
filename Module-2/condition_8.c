#include<stdio.h>
int main()
{
    int month;
    printf("Enter the month number : ");
    scanf("%d",&month);
    //number of days in month
    if (month==1)
    {
        printf("It contains 31 days");
    }
    else if (month==2)
    {
        printf("It contains 28 days or 29 days");
    }
    else if (month==3)
    {
        printf("It contains 31 days");
    }
    else if (month==4)
    {
        printf("It contains 30 days");
    }
    else if ( month==5)
    {
        printf("It contains 31 days");
    }
    else if (month==6)
    {
        printf("It contains 30 days");
    }
    else if (month==7)
    {
        printf("It contains 31 days");
    }
    else if (month==8)
    {
        printf("It contains 31 days");
    }
    else if ( month==9)
    {
        printf("It contains 30 days");
    }
    else if (month==10)
    {
        printf("It contains 31 days");
    }
    else if (month==11)
    {
      printf("It contains 30 days");
    }
    else if (month==12)
    {
        printf("It contains 31 days");
    }
    else
    {
        printf("Is not a month number");
    }
    return 0;
}