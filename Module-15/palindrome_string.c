#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int palindrome_string(char *s,int i,int j)
{
    if(i>=j)
    return true;
    int flag=palindrome_string(s,i+1,j-1);
    if(s[i] != s[j])
    {
        flag=0;
    }
    return flag;
}
int main()
{
    char s[250];
    scanf("%s",s);
    int flag=palindrome_string(s,0,strlen(s)-1);
    if(flag==1)
    {
        printf("Palindrome");
    }
    else if(flag==0)
    {
        printf("Not Palindrome");
    }
    return 0;
}