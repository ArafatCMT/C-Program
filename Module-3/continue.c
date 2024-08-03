#include<stdio.h>
int main()
{
    char ch;
    for (ch='a'; ch<='l'; ch++)
    {
        if (ch=='f')
        {
            continue;
        }
        printf("%c\n",ch);
    }
    return 0;
}