#include<stdio.h>
int string_length(char s[], int i)
{
    //base case
    if(s[i]=='\0')
    return 0;
    int length = string_length(s,i+1);
    return length+1;
}
int main()
{
    char s[100];
    scanf("%s",s);
    int length=string_length(s,0);
    printf("%d",length);
    return 0;
}