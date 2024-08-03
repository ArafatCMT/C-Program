#include<stdio.h>
int main()
{
    int i,j,numberOfRows,numberOrColums;
    int A[10][10],B[10][10],C[10][10];
    printf("Enter the number of Rows and Colums : ");
    scanf("%d %d",&numberOfRows,&numberOrColums);
    
    //scaning A matrix
    printf("Enter elements for A matrix.\n");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOrColums; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //scaning B matrix
    printf("Enter elements for B matrix.\n");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOrColums; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
     printf("\n");
    //printing A matrix
    printf("A= ");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOrColums; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //printing B matrix
    printf("B= ");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOrColums; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Adding matrix
    for(i=0; i<numberOfRows;  i++)
    {
        for(j=0; j<numberOrColums; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\n");
    //printing C matrix
    printf("A+B= ");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOrColums; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }


    

    return 0;
}