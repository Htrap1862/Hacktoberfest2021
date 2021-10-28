//program to identify if a sparse matrix was entered by the user
//written in C
#include <stdio.h>
int main()
{
    int a[10][10], r, c, i, j, co = 0, s;

    printf("\nEnter the matrix row and columns: ");
    scanf("%d%d", &r, &c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("\nEnter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] == 0)
            {
                co++;
            }
        }
    }
    s = r * c;
    if (co > s / 2)
    {
        printf("\n Sparse matrix was entered");
    }
    else
    {
        printf("\n Sparse matrix wasn't entered");
    }
}