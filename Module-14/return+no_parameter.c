#include<stdio.h>
int sum()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a*b;
    return sum;
}
int main()
{
    int mul=sum();
    printf("The multipication is : %d",mul);
    return 0;
}