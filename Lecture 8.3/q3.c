#include <stdio.h>
int main()
{
    int r;
    printf("Eneter the size of row & colum = ");
    scanf("%d",&r);

    int a[r][r];
    printf("Enter the element : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    int sum = 0;

    for (int i = 0, j = 0; j < 3, i < 3; i++, j++)
    {
        sum = sum + a[i][j];
    }

    printf("The sum of diagonal element = %d", sum);

    return 0;
}