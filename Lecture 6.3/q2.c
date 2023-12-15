#include<stdio.h>
int main(){
    int a;
    printf("Enter any number =");
    scanf("%d",&a);
    int sum=1;
    for (int i = 1; i <= a; i++)
    {
        sum=sum*i;
    }
    printf("The factorial is = %d",sum);
    return 0;
}