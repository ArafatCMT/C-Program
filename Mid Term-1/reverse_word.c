#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    gets(s);
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]==' ' || s[i]=='\0')
        {
            for(int i; s[i-1]>=' '; i--)
            {
                printf("%c",s[i]);
            }
        }
    }
    return 0;
}