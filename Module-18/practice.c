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
    if(row!=col)
    {
        printf("Not Diagonal Matrix.\n");
        return 0;
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i+j==row-1)
            {
                continue;
            }
            if(arr[i][j]!=0)
            {
                printf("Not Diagonal Matrix.\n");
                return 0;
            }
        }
    }
    printf("Secondary Diagonal Matrix.\n");
    return 0;
}