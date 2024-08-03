//copy element of three array
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    int b[m];
    for(int i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }
    int o;
    scanf("%d",&o);
    int c[o];
    for(int i=0; i<o; i++)
    {
        scanf("%d",&c[i]);
    }
    int ans[n+m+o];
    //1st array element copy to ans array
    for(int i=0; i<n; i++)
    {
        ans[i]=a[i];
    }
    //2nd array element copy to ans array
    int i=n;
    for(int j=0; j<m; j++)
    {
        ans[i]=b[j];
        i++;
    }
    //3nd array element copy to ans array
    int i1=i+m;
    for(int k=0; k<o; k++)
    {
        ans[i1]=c[k];
        i1++;
    }
    //printing copy element of three array
    for(int i1=0; i1<(i+m+o); i1++)
    {
        printf("%d ",ans[i1]);
    }
    return 0;
}