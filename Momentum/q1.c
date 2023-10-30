#include<stdio.h>
int main(){
    int a;
    printf("Enter any number =");
    scanf("%d",&a);
    // if (a%2==0)
    // {
    //     printf("This is even number");
    // }
    // else
    // {
    //     printf("This is odd number");
    // }

    (a%2==0) ? printf("This is even number") : printf("This is odd number");

    return 0;
}