#include<stdio.h>
#include<string.h>
int main()
{
    char s[11];
    scanf("%s",&s);
    char t[11];
    scanf("%s",&t);
    int lens=strlen(s), lent=strlen(t);
    printf("%d %d\n",lens,lent);
    printf("%s%s\n",s,t);
    char temp=s[0];
    s[0]=t[0];
    t[0]=temp;
    printf("%s %s",s,t);
    return 0;
}