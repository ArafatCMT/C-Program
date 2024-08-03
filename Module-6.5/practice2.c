#include<stdio.h>
int main()
{
    long long int a,b,c;
    long long int d,r1,r2,r3,r4,r5,r6;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    r1=a+b-c;
    r2=a-b+c;
    r3=a+b*c;
    r4=a*b+c;
    r5=a-b*c;
    r6=a*b-c;
   
    if ( r1==d)
    {
        printf("YES");
    }
    else if ( r2==d)
    {
        printf("YES");
    }
    else if ( r3==d)
    {
        printf("YES");
    }
    else if ( r4==d)
    {
        printf("YES");
    }
    else if ( r5==d)
    {
        printf("YES");
    }
    else if ( r6==d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }


    return 0;
}