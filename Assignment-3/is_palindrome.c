#include<stdio.h>
#include<string.h>
int is_palindrome(char *str)
{
    int length=strlen(str);
    int i=0, j=length-1,flag;
    while(i<=j)
    {
       flag=0;
       if(str[i]==str[j])
       {
        flag=1;
        i++;
        j--;
       }
       else
       {
        break;
       }
    }
    return flag;
}
int main()
{
    char str[1001];
    scanf("%s",str);
    int flag=is_palindrome(str);
    if(flag==1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}