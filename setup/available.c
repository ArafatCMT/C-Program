#include<stdio.h>
int main()
{
    char ch;
    int cnt[26]={0};
    while(scanf("%c",&ch) != EOF)
    {
        cnt[ch-'a']++;
    }
    for(int i='a'; i<='z'; i++)
    {
        if(cnt[i]!=0)
        printf("%c : %d\n",i,cnt[i-'a']);
    }
    return 0;
}
