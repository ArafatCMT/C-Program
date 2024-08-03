#include<stdio.h>
#include<string.h>
int main()
{
    char s[200];
    scanf("%s",&s);
    int cnt[26]={0};
    for(int i=0; i<strlen(s); i++)           //1 r 2 number technic
    {
        int val=s[i]-'a';
        cnt[val]++;
    }
    for(int i=0; i<26; i++)
    {
       if(cnt[i]!=0)
       {
         printf("%c - %d\n",i+97,cnt[i]);
       }
    }
    return 0;
}