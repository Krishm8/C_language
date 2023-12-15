#include <stdio.h>
int main()
{
    int rc, sum = 0;
    printf("enetyr the size of row & colum = ");
    scanf("%d", &rc);

    int a[rc][rc];

    for (int i = 0; i < rc; i++)
    {
        for (int j = 0; j < rc; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < rc; i++)
    {
        for (int j = 0; j < rc; j++)
        {
            if (i == 0 || j == 0 || i == 4 || j == 4)
            {
                printf("%d ", a[i][j]);
                sum = sum + a[i][j];
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("sum is = %d", sum);

    return 0;
}