#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0; i<n; i++)
    {
        sum +=ar[i];
    }
    printf("The sum is : %d\n",sum);
    printf("The average number: %0.2f",(float)sum/n);
    return 0;
}