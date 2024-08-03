#include<stdio.h>
int sum(int x)
{
    int total=0;
    if(x==1)
    return x;
    total = x + sum(x-1);
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