#include<stdio.h>
int int_reverse(int n,int sum)
{
    // base case
    if (n==0)
    {
        return sum;
    }
    sum = sum * 10 + n%10;
    int res=int_reverse(n/10,sum);
    return res;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",int_reverse(n,0));
    return 0;
}