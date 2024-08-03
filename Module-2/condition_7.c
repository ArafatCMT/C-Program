#include<stdio.h>
int main()
{
    int day,year,weak,days;
    scanf("%d",&day);
    year = day/365;
    weak = (day%365)/7;
    days=(day%365)%7;
    printf("year : %d\n",year);
    printf("weak : %d\n",weak);
    printf("days : %d\n",days);    


}