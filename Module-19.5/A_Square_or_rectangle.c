#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int height,width;
        scanf("%d %d",&height,&width);
        if(height==width)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }
    
    return 0;
}