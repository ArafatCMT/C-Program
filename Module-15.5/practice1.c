#include<stdio.h>
#include<stdlib.h>
int my_abs(int number)
{
    int value=abs(number);
}
int main()
{
    int number;
    scanf("%d",&number);
    int value=my_abs(number);
    printf("%d",value);
    return 0;
}