#include<stdio.h>
int main()
{
    int i,n;
    int mlt=1;
    printf("Input number : ");
    scanf("%d",&n);
    for(i=1 ; i<=n;  i +=1)
    {
        
        printf("%d * %d = %d\n",mlt);
    }
    return 0;
}