#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m1[n],m2[n],d[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d %d %d",&m1[i],&m2[i],&d[i]);
    }
    int a[n],b[n],c[n],e[n];
    for(int i=0; i<n; i++)
    {
        a[i] = m1[i] * d[i];
        b[i] = m1[i] + m2[i];
        c[i] = a[i] / b[i];
        e[i] = d[i] - c[i];
    }
    for(int i=0; i<n; i++)
    {
        printf("%d\n",e[i]);
    }
    return 0;
}