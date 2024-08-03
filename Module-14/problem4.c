#include<stdio.h>
void Circle_area(double r)
{
    double area=r*r*3.1416;
    printf("The area of circle is : %0.2lf",area);
}
int main()
{
    double radius;
    scanf("%lf",&radius);
    Circle_area(radius);
    return 0;
}