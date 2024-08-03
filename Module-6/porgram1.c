#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    if(n==1)
    {
        printf("-1");
    }
    else
    {
        for(i=1; i<=n; i+=1)
        {
            if(i%2==0)
            {
                printf("%d\n",i);
            }
        }
        
    }

    //my program
    /*    
    #include<stdio.h>
    int main()
    {
        int i,n;
        scanf("%d",&n);
        if(n!=1)
        {
        for(i=2; i<=n; i+=2)
        {
          printf("%d\n",i);
        }
        }
        else
        {
            printf("-1");
        }
        return 0;
    }

*/
    return 0;
}