//Addition of matrix diagonal elements in left to right order and right to left

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, sum = 0;
    int m, n;
    int a[10][10];
    printf("\nEnter size of matrix a: ");
    scanf("%d%d", &m, &n);
    printf("\nEnter elements of matrix a");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe array is: ");
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum = sum + a[i][j];
            }
        }
    }
    printf("\nAddition of matrix diagonal elements in left to right order is: %d ", sum);
    sum = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                sum = sum + a[i][j];
            }
        }
    }
    printf("\nAddition of matrix diagonal elements in right to left order is: %d ", sum);
}