#include <stdio.h>
int main()
{
    int x, y, sum = 0, n;
    printf("enetr the size of row = ");
    scanf("%d",&x);

    printf("enetr thr size of colum = ");
    scanf("%d",&y);

    n = x * y;

    int a[x][y];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            // printf("%d", a[i][j]);
            sum = sum + a[i][j];
        }
    }

    float avr;
    avr = sum / n;

    printf("Average of an Array = %f", avr);

    return 0;
}