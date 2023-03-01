#include <stdio.h>

int main()
{
    int row, column;
    int i,j;
    printf("Enter the size of the row:");
    scanf("%d", &row);
    printf("Enter the size of the column:");
    scanf("%d", &column);
    int arr1[row][column];
    printf("Enter the values of the matrix a:");
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\nvalues of the matrix b:\n");
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
         printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(i==j)
            {
                printf("%d\n",arr1[i][j]);
                //printf("\n");
            }
        }
        printf("\n");
    }
}