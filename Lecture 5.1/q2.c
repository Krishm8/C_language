#include<stdio.h>
int main(){
    int a;
    printf("Enter any number =");
    scanf("%d",&a);
    if (0<a)
    {
        printf("This number is Positive");
    }
    else if (0==a)
    {
        printf("This number is Neutral");
    }
    else
    {
        printf("This number is Negative");
    }
    return 0;
}
