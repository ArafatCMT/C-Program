#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    //if else condition check whether first two numbers are equal
    if (a==b)
    {
        //nested if else condition check if c is equal to a and b
        if(a==c)
        {
            //all are equal
            printf("Yes");
        }
        else 
        {
            printf("No");
        }
    }
    else
    {
        printf("No");
    }
    return 0;
}