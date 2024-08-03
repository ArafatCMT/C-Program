#include<stdio.h>
int main()
{
    int i,n,sum;
    i=1;
    sum=0;
    printf("input number : ");
    scanf("%d",&n);
    while(i<=n)
    {
      sum +=i;
      i+=1;
    }
    printf("%d",sum);
    return 0;
}