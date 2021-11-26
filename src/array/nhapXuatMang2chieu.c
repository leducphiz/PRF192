#include <stdio.h>
#define MAX 100

int arr[MAX][MAX];
int row, column;

void inputMatrix(int arr[MAX][MAX], int &row, int &column)
{
    printf("\nHow many row you want? :");
    scanf("%d", &row);
    printf("\nHow many column you want? ");
    scanf("%d", &column);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Row %d Column %d:", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
}

void outputMatrix(int arr[MAX][MAX], int row, int column)
{
    printf("Matrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    inputMatrix(arr, row, column);
    outputMatrix(arr, row, column);
}