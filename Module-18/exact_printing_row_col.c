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
    //exact colume 
    // int c;
    // scanf("%d",&c);
    // for(int i=0; i<row; i++)
    // {
    //     printf("%d\n",arr[i][c]);
    // }
    //exact row
    int r;
    scanf("%d",&r);
    for(int i=0; i<col; i++)
    {
        printf("%d\n",arr[r][i]);
    }
    return 0;
}