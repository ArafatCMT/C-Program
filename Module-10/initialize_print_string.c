#include<stdio.h>
int main()
{
    //char a[6]={'A','r','a','f','a','t'};

    char a[7]="Arafat";
    int sz=sizeof(a)/sizeof(char);
    printf("%s %d\n",a,sz);
    return 0;
}