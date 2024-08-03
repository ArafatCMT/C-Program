#include<stdio.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int i=0;
    while(1)
    {
        if(a[i]=='\0' && b[i]=='\0')
        {
            printf("Both are same\n");
            break;
        }
        else if(a[i]=='\0')
        {
            printf("A is smaller than B\n");
            break;
        }
        else if(b[i]=='\0')
        {
            printf("B is smaller than A\n");
            break;
        }
        if (a[i]==b[i])
        {
            i++;
        }
        else if (a[i]<b[i])
        {
            printf("A is smaller than B\n");
            break;
        }
        else 
        {
            printf("B is smaller than A\n");
            break;
        }
    }
    return 0;
}