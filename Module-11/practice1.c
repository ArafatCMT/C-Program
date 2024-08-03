#include<stdio.h>
#include<string.h>
int main()
{
    //string concatention // string concatenation er jonno build in functon hosse : strcat(a,b);
    char a[200],b[100];
    scanf("%s %s",&a,&b);
    int k=strlen(a);
    for(int i=0; i<=4; i++)
    {
        a[k]=b[i];
        k++;
    }
    a[11]='\0';
    printf("%d\n",k);
    printf("%s %s",a,b);

    return 0;
}