#include<stdio.h>
int main()
{
    int i,n;
    int sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for (i=1; i<=n; i +=1)
    {
        sum += i;
        //printf("%d\n",sum);
    }
      printf("%d\n",sum);

    return 0;
}