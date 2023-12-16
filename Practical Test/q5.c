#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter number of a = ");
    scanf("%d",&a);
    printf("Enter number of b = ");
    scanf("%d",&b);
    printf("Enter number of c = ");
    scanf("%d",&c);
    
    a<b ? a<c ? printf("a is small") : printf("c is small") :
    b<c ? printf("b is small") : printf("c is small");  
    
    return 0;
}