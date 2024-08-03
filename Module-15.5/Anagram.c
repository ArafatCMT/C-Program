#include<stdio.h>
#include<string.h>
int Check_Anagram(char *str1,char *str2)
{
    int len1=strlen(str1);
    int len2=strlen(str2);
    int cnt_str1[26]={0};
    int cnt_str2[26]={0};
    for(int i=0; i<len1; i++)
    {
        cnt_str1[str1[i]-'a']++;
    }
    for(int i=0; i<len2; i++)
    {
        cnt_str2[str2[i]-'a']++;
    }
    int flag=1;
    for(int i=0; i<26; i++)
    {
        if(cnt_str1[i] != cnt_str2[i])
        {
            flag=0;
        }
    }
    return flag;
}
int main()
{
    char str1[128], str2[128];
    printf("Input First String : ");
    scanf("%s",str1);
    printf("Input second String : ");
    scanf("%s",str2);
    int flag=Check_Anagram(str1,str2);
    if(flag==1)
    {
        printf("%s and %s are Anagram.\n",str1,str2);
    }
    else
    {
        printf("%s and %s are not Anagram.\n",str1,str2);
    }

    return 0;
}