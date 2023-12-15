#include <stdio.h>
int main()
{
    int r, c;

    printf("enetr the size of row = ");
    scanf("%d",&r);

    printf("enetr the size of colum = ");
    scanf("%d",&c);

    int a[r][c];
    int b[r][c];
    int d[r][c];

    printf("Enter A's element\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enetr B's element\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("Array c is : \n");
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum = a[i][j] + b[i][j];
            printf("%d ", sum);
        }
        printf("\n");
    }

    return 0;
}