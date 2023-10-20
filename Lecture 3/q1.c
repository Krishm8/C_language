#include<stdio.h>
int main(){
    int a;
    float pi=3.14;
    printf("Enter radius of circle =");
    scanf("%d",&a);
    printf("The area of a circle is :%0.2f",pi*a*a);
    return 0;
}