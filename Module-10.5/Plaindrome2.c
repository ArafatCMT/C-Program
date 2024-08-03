#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",&s);
    int sz=strlen(s);
    int ans=1;
    int i=0, j=sz-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            ans *=0;
            break;
        }
        else
        {
            i++;
            j--;
        }
    }
    if(ans==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}