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
    int flag=1;
    if(row!=col)
    {
        flag=0;
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i+j==row-1)
            {
                if(arr[i][j]!=arr[0][col-1])
                {
                    flag=0;
                }
            }
        }
    }
    if(flag==1)
    {
        printf("Secondary Scalar Matrix\n");
    }
    else
    {
        printf("Not Scalar Matrix\n");
    }
    return 0;
}