#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0; i<row ; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int flag=1;
    if(row==col)
    {
        for(int i=0; i<row ; i++)
        {
        for(int j=0; j<col; j++)
        {
            if(i==j)
            {
                continue;
            }
            if(arr[i][j]!=0)
            {
                flag=0;
                break;
            }
        }
        }
    }
    else
    {
        flag=0;
    }
    if(flag==1)
    {
        printf("Primary Diagonal\n");
    }
    else
    {
        printf("Not Primary Diagonal\n");
    }
    return 0;
}