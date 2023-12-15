#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number = ");
    scanf("%d",&a);
    printf("Enter the second number = ");
    scanf("%d",&b);

    printf("The array is = ");
    for (int i = a; i <= b; i++)
    {
        if (i%2==0)
        { 
            printf("%d\n",i++);
        }
    }
    return 0;
}