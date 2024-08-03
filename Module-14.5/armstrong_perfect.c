#include<stdio.h>
#include<math.h>
int Armstrong_number(int n)
{
    int sum=0; 
    for(int i=1; n>0; i++)
    {
        int temp = n%10;
        n = n/10;
        sum += pow(temp,3);
    }
    return sum;
}
int perfect_number(int n)
{
    int sum1=0;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        {
            sum1 +=i;
        }
    }
    return sum1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int sum=Armstrong_number(n);
    int sum1=perfect_number(n);
    if(sum==n && sum1==n)
    {
        printf("The %d is an Armstrong number.\n",n);
        printf("The %d is an Perfect number.\n",n);
    }
    else
    {
        if(sum==n)
        {
            printf("The %d is an Armstrong number.\n",n);
        }
        else
        {
            printf("The %d is not a Armstrong number.\n",n);
        }
        if(sum1==n)
        {
            printf("The %d is an Perfect number.\n",n);
        }
        else
        {
            printf("The %d is not a Perfect number.\n",n);
        }
    }
    return 0;
}