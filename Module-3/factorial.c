#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Input number : ");
    scanf("%d",&n);
    while(n>1)
    {
        fact = fact * n;
        n = n - 1;
    }
    printf("%d",fact);
    
    return 0;
}