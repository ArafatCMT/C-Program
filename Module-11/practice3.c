#include<stdio.h>
#include<string.h>
int main()
{
    char a[250],b[250];
    scanf("%s %s",&a,&b);
    int len1=strlen(a), len2=strlen(b);
    int mx=len1;
    if(mx < len2)
    {
        mx =len2;
    }
    for(int i=0 ; i<=mx; )
    {
        if(a[i]=='\0' && b[i]=='\0')
        {
            printf("same\n");
            break;
        }
        else if(a[i]=='\0')
        {
            printf("A choto\n");
            break;
        }
        else if(b[i]=='\0')
        {
            printf("B choto\n");
            break;
        }
        if (a[i]==b[i])
        {
            i++;
        }
        else if (a[i]<b[i])
        {
            printf("A choto\n");
            break;
        }
        else
        {
            printf("A choto\n");
            break;
        }
    }
    return 0;
}