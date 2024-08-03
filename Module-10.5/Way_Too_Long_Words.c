#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for( i=0; i < n; i++)
    {
        char s[101];
        scanf("%s",&s);
        int len=strlen(s);
        if(len <= 10)
        {
            printf("%s\n",s);
        }
        else
        {
            printf("%c%d%c\n",s[0],len-2,s[len-1]);
        }
    }
    return 0;
}