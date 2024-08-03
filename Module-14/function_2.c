//Return type + No Parameter
#include<stdio.h>
int sum()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int sum=num1+num2;
    return sum;
}
int main()
{
    int add= sum();
    printf("%d",add);
    return 0;
}