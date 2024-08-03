#include<stdio.h>
int main()
{
    int n1,n2;
    int rem,lcm,gcd;
    printf("value of n1 : ");
    scanf("%d",&n1);
    printf("value of n2 : ");
    scanf("%d",&n2);
    while(n2 !=0 )
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    printf("gcd is : %d\n",n1);


    return 0;
}