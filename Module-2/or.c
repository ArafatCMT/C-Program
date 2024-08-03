#include<stdio.h>
int main()
{
    int weak;
    printf("Input weak day number : ");
    scanf("%d",&weak);

    if (weak==1)
    {
        printf("Monday");
    }
    else if (weak==2)
    {
        printf("Tuseday");
    }
    else if (weak==3)
    {
        printf("Wednesday");
    }
    else if (weak==4)
    {
        printf("Thursday");
    }
    else if (weak==5)
    {
        printf("Friday");
    }
     else if (weak==6)
    {
        printf("Saturday");
    }
    else if (weak==7)
    {
        printf("Sunday");
    }
    else 
    {
        printf("Incorrect weak number");
    }
    return 0;
}