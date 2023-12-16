#include <stdio.h>
int x(int x,int y)
{
    for (int i = x; i <= y; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    int a,b;

    printf("Enter first number = ");
    scanf("%d", &a);

    printf("Enter last number = ");
    scanf("%d", &b);

    printf("Even numbers are :\n");
    x(a,b);

    return 0;
}