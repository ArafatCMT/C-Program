#include<stdio.h>
void base_conversion(int n)
{
    //base case
    if(n==0)
    return;
    int rem= n%2;
    base_conversion(n/2);
    printf("%d",rem);
    return;
}
int main()
{
    int n;
    scanf("%d",&n);
    base_conversion(n);
    return 0;
}