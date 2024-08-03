#include<stdio.h>
void prime_function(int n)
{
    int a;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        int flag=1;
        for(int i=2; i<a; i++)
        {
            if(a%i==0)
            {
                flag=0;
                break;
            }
        }
         if(flag==1)
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    prime_function(n);
    return 0;
}