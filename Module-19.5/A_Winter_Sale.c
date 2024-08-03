#include<stdio.h>
int main()
{
    float discount_rate,discounted_price;
    scanf("%f %f",&discount_rate,&discounted_price);
    float a= (100/(100-discount_rate))*discounted_price;
    printf("%0.2f\n",a);
    return 0;
}