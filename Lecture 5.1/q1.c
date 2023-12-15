#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a =");
    scanf("%d",&a);
    printf("Enter the value of b =");
    scanf("%d",&b);
    if (a>b)
    {
        printf("The minimum value is = %d",b);
    }
    else
    {
        printf("The minimum value is = %d",a);
    }
    
    return 0;
}