#include<stdio.h>
int main()
{
    int num1,num2,num3;
    scanf("%d %d %d ",&num1,&num2,&num3);

    //if else condition check num1 is greater than num2
    if (num1>num2)
    {
        //nested if else condition check if num1 is greater than num3
        if(num1>num3)
        {
            printf("Largest is num1 : %d",num1);
        }
        else
        {
            printf("Largest is num2 : %d",num2);
        }
    }
    else
    {
        printf("Largest is num3 : %d",num3);
    }
    return 0;
}