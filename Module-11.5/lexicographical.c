#include<stdio.h>
#include<string.h>
int main()
{
    char s[25],t[25];
    scanf("%s %s",&s,&t);
    int len1=strlen(s), len2=strlen(t);
    int mx=len1;
    if (mx < len2)
    {
        mx = len2;
    }
    for(int i=0; i<=mx; )
    {
        if(s[i]=='\0' && t[i]=='\0')
        {
            printf("%s",s);
            break;
        }
        else if (s[i]=='\0')
        {
            printf("%s",s);
            break;
        }
        else if (t[i]=='\0')
        {
            printf("%s",t);
            break;
        }
        
        if(s[i]==t[i])
        {
            i++;
        }
        else if(s[i] < t[i])
        {
            printf("%s",s);
            break;
        }
        else
        {
            printf("%s",t);
            break;
        }
    }
    return 0;
}