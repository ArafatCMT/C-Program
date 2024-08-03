#include<stdio.h>
int main()
{
    int year;
    printf("Enter yera : ");
    scanf("%d",&year);
    if (year%400==0)
    {
        printf("%d is leap year",year);
    }
    else if((year % 4 == 0) && (year % 100 !=0))
    {
        printf("%d is leap year",year);
    }
    else
    {
        printf("Common year");
    }
    return 0;
}