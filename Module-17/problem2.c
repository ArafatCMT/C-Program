#include<stdio.h>
int sum(int i)
{
    int total=0;
    if(i==1)
    return i;
    total = i + sum(i-1);
    return total;
}
int main()
{
    int n;
    scanf("%d",&n);
    int total=sum(n);
    printf("%d",total);
    return 0;
}