#include<stdio.h>
int prime_number(int number)
{
    int flag=0;
    for(int i=2; i<number; i++)
    {
        if(number%i==0)
        {
            flag=1;
            break;
        }
    }
    return flag;
}
int main()
{
    int number;
    scanf("%d",&number);
    int flag= prime_number(number);
    if(flag==0)
    {
        printf("The number %d is a prime number.\n",number);
    }
    else 
    {
        printf("The number %d is not a prime number.\n",number);
    }
    return 0;
}