#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    int a[n];
    for(int i=0; i<n; i++)
    {
       scanf("%1d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
         sum +=a[i];
    }
      printf("%d\n",sum);
    return 0;
}






// int n;
//     scanf("%d",&n);
//     int sum=0;
//     char a[n];
//     scanf("%s",a);
//     for(int i=0; i<n; i++)
//     {
       
//         sum +=a[i]-'0';
//     }
//      printf("%d\n",sum);