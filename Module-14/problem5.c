#include<stdio.h>
#include<math.h>
double square(double x)
{
    double y= sqrt(x);
    return y;
}
int main()
{
    double x;
    scanf("%lf",&x);
    double y=square(x);
    printf("%0.2lf",y);
    return 0;
}