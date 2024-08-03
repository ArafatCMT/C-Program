#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int len = strlen(a), len2 = strlen(b);
    int mx = len;
    if (mx < len2);
    {
        mx = len2;
    }
    for(int i=0 ; i<=mx;  i++)
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
        if(a[i]==b[i])
        {
            
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