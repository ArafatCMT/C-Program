#include<stdio.h>
int main()
{
    int i,n,sum=0;
    float avg;
    printf("Input number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i+=1)
    {
        sum +=i;
    }
    printf("the sum is : %d\n",sum);
    avg=sum/n;
    printf("The average is : %f",avg);

    return 0;
}