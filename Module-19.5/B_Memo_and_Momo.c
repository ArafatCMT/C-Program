#include<stdio.h>
int main()
{
    long long int num1,num2,num3;
    scanf("%lld %lld %lld",&num1,&num2,&num3);
    if(num1%num3==0 && num2%num3==0)
    {
        printf("Both\n");
    }
    else if(num1%num3==0)
    {
        printf("Memo\n");
    }
    else if(num2%num3==0)
    {
        printf("Momo\n");
    }
    else
    {
        printf("No One\n");
    }
    return 0;
}