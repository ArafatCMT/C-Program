#include<stdio.h>
#include<string.h>
int Anagram (char *str1,char *str2)
{
    int str1_len=strlen(str1);
    int str2_len=strlen(str2);
    int str1_cnt[26]={0}  ,  str2_cnt[26]={0};
    for(int i=0; i<str1_len; i++)
    {
        str1_cnt[str1[i]-'a']++;
    }
    for(int i=0; i<str2_len; i++)
    {
        str2_cnt[str2[i]-'a']++;
    }
    int flag=1;
    for(int i=0; i<26; i++)
    {
        if(str1_cnt[i]!=str2_cnt[i])
        {
            flag=0;
            break;
        }
    }
    return flag;
}
int main()
{
    char str1[256],str2[256];
    scanf("%s %s",str1,str2);
    int flag = Anagram(str1,str2);
    if(flag==1)
    printf("Anagram.\n");
    else
    printf("Not Anagram.\n");

    return 0;
}