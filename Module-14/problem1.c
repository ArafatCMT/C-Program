#include<stdio.h>
#include<math.h>
double square(double x, double y)
{
    double s = pow(x,y);
    return s;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    double sqr=square(a,b);
    printf("The square of %d is : %0.2lf\n",a,sqr);
    return 0;
}