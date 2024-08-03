//no return + no parameter
#include<stdio.h>
void sum(void)
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int sum=num1+num2;
    printf("%d",sum);
}
int main()
{
    sum();
    return 0;
}