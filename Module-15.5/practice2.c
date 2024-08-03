#include<stdio.h>
#include<string.h>
int my_len(char *str)
{
    int length=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        length++;
    }
    return length;
}
int main()
{
    char str[1024];
    gets(str);
    int length=my_len(str);
    printf("%d",length);
    return 0;
}