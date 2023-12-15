#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the first value =");
    scanf("%d",&a);
    printf("Enter the second value =");
    scanf("%d",&b);
    printf("Enter the third value =");
    scanf("%d",&c);
    printf("Enter the fourth value =");
    scanf("%d",&d);

    if (a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                printf("The maximum value is = %d",a);
            }
            else
            {
                printf("The maximum value is = %d",d);
            }
        }
        else
        {
            printf("The maximum value is = %d",c);
        }
        
    }
    else if (b>c)
    {
        if (b>d)
        {
            printf("The maximum value is = %d",b);
        }
        else
        {
            printf("The maximum value is = %d",d);
        }
    }
    else if (c>d)
    {
        printf("The maximum value is = %d",c);
    }
    else
    {
        printf("The maximum value is = %d",d);
    }
    return 0;
}