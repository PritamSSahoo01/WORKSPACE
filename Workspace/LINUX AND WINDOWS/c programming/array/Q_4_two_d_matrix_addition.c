#include <stdio.h>

int main()
{
    int row, column;
    printf("Enter the size of the row:");
    scanf("%d", &row);
    printf("Enter the size of the column:");
    scanf("%d", &column);
    int arr1[row][column], arr2[row][column];
    printf("Enter the values of the matrix a:");
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j <= column; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the values of the matrix b:");
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j <= column; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf(" values of the matrix a:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= column; j++)
        {
            printf("%d\t", arr1[i][j]);
            //printf("\n");
        }
        printf("\n");
    }
    printf("\n");
    printf(" values of the matrix b:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= column; j++)
        {
            printf("%d\t", arr2[i][j]);
            //printf("\n");
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= column; j++)
        {
           arr1[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("after addition of two matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= column; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
}