#include<stdio.h>
void my_abs(long long int number)
{
    if(number>0)
    {
        printf("%d",number);
    }
    else
    {
        printf("%d",number*(-1));
    }
}
int main()
{
    long long int number;
    scanf("%lld",&number);
    my_abs(number);
    return 0;
}