#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int x;
    scanf("%d",&x);
    int flag=0;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(arr[i][j]==x)
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        printf("will not take number\n");
    }
    else 
    {
        printf("will take number\n");
    }
    return 0;
}