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
    if(row != col)
    {
        printf("NO");
        return 0;
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
           if((i==j) || (i+j==row-1))
           {
                if(arr[i][j] != 1)
                {
                    printf("NO");
                    return 0;
                }
           }
           else if(arr[i][j] != 0)
           {
            printf("NO");
            return 0;
           }
        }
    }
    printf("YES");
    return 0;
}