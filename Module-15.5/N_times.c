#include<stdio.h>
void n_times(int t)
{
    for(int i=0; i<t; i++)
    {
        int n;
        char ch;
        scanf("%d %c",&n,&ch);
        for(int i=0; i<n; i++)
        {
            printf("%c ",ch);
        }
        printf("\n");
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    n_times(t);
    return 0;
}