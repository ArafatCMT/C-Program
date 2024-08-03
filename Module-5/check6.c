#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf",&a,&b);
    c = a%b;
    double result = floor(c);
    printf("floor %lf/%lf = %lf",a,b,result);
    return 0;
}