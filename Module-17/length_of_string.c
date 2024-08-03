#include<stdio.h>
int string_length(char *str,int i)
{
    if(str[i]=='\0') return 0;
    int length=string_length(str,i+1);
    return length+1;

}
int main()
{
    char str[32];
    scanf("%s",str);
    int length=string_length(str,0);
    printf("%d",length);
    return 0;
}