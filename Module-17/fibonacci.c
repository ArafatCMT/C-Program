#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int first=0,second=1,fibo,cnt=0;
    while(cnt<n)
    {
        if(cnt<=1)
        {
            fibo=cnt;
        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
        printf("%d ",fibo);
        cnt++;
    }
    return 0;
}