#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int val = strcmp(a,b);
    if (val<0)
    {
        printf("A is smaller than B\n");
    }
    else if (val>0)
    {
        printf("B is smaller than A\n");
    }
    else
    {
        printf("Both are same\n");
    }
    return 0;
}