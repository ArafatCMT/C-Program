#include<stdio.h>
#include<string.h>
int Anagram_check(char *str1,char *str2)
{
    int length1=strlen(str1);
    int length2=strlen(str2);
    int str1_cnt[26]={0};
    int str2_cnt[26]={0};
    for(int i=0; i<length1; i++)
    {
        int val=str1[i]-'a';
        str1_cnt[val]++;
    }
    for(int i=0; i<length2; i++)
    {
        int val=str2[i]-'a';
        str2_cnt[val]++;
    }
    int flag;
    for(int i=0; i<26; i++)
    {
        flag=0;
        if(str1_cnt[i]==str2_cnt[i])
            flag=1;
        else
            break;
    }
    return flag;
}
int main()
{
    char str1[256],str2[256];
    scanf("%s %s",str1,str2);
    int flag=Anagram_check(str1,str2);
    if(flag==1)
        printf("Anagram.");
    else
        printf("Not Anagram.");
    return 0;
}