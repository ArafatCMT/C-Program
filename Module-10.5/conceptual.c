#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        char s[55],t[55];
        scanf("%s %s",s,t);
        int len1=strlen(s), len2=strlen(t);
        int max = len1;
        if (max < len2)
        {
            max = len2;
        }
        for( int i=0; i < max; i++)
        {
            if(i < len1)
            {
                printf("%c",s[i]);
            }
            if( i <len2)
            {
                printf("%c",t[i]);
            }
        }
        printf("\n");
    }
    
    return 0;
}