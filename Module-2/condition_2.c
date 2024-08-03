#include<stdio.h>
int main()
{
    int num1,num2,num3;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);

    if (num1>num2 && num1>num3)
    {
        printf("number 1 is largest : %d\n",num1);
    }
    else if (num2>num3 && num2>num3)
    {
        printf("number 2 is largest : %d\n",num2);
    }
    else if (num3>num1 && num3>num2)
    {
        printf("number 3 is largest : %d\n",num3);
    }
    else
    {
        printf("The values are equal");
    }
    return 0;
}