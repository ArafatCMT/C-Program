#include<stdio.h>
#include<string.h>
int main()
{                                            //3 r 4 number technic
    char s[100];
    scanf("%s",&s);
    int count[26]={0};
    for(int i=0; i<strlen(s); i++)
    {
        int val=s[i]-'a';
        count[val]++;
    }
    for(int i=0; i<strlen(s); i++)
    {
        int val=s[i]-'a';
        if(count[val]!=0)
        {
            printf("%c - %d\n",val+97,count[val]);
        }
        count[val]=0;

    }
    return 0;
}