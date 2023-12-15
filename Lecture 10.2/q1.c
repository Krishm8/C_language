#include <stdio.h>
int arr(int number)
{
    int b[number];
    int sum=0;
    printf("Enetr the element of array \n");
    for (int  i = 0; i < number; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&b[i]);
    }
    for (int  i = 0; i < number; i++)
    {
       sum=sum+b[i];
    }
    printf("Sum is =%d",sum);
}

int main()
{
    int a;
    printf("Enetr the size of array=");
    scanf("%d",&a);    
    arr(a);
    return 0;
}