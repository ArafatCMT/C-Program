#include<stdio.h>
int fact(int n)
{
    int value;
    if(n==1)
    {
      return 1;
    }
    else
    {
        value=n*fact(n-1);
       
    }
    return value;

}
int main()
{
    int n;
    scanf("%d",&n);
    int factorial=fact(n);
    printf("factrorial of %d is = %d",n,factorial);
    return 0;
}