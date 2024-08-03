#include<stdio.h>
int main()
{
    int mark;
    scanf("%d",&mark);
    //if else codition check is mark greater than 35
    if (mark>=40)
    {
        if (mark>=80)
        {
            printf("Grade A+");
        }
        else if (mark>=70)
        {
            printf("Grade A");
        }
        else if (mark>=60)
        {
            printf("Grade A-");
        }
        else if (mark>=50)
        {
            printf("Grade B");
        }
        else
        {
            printf("Grade C");
        }
    }
    else
    {
        printf("Fail");
    }
    return 0;
}