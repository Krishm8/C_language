#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a =");
    scanf("%d",&a);
    printf("Enter the value of b =");
    scanf("%d",&b);
    printf("Enter the value of c =");
    scanf("%d",&c);

    (a<b) ? (b<c) ? (a<c) ? printf("a is small") : printf("s is small") : printf(" is small") : printf("c is small");    
    return 0;

}