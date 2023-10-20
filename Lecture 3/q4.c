#include<stdio.h>
int main(){
    int p,r,t;
    printf("Enter the value of p =");
    scanf("%d",&p);
    printf("Enter the value of r =");
    scanf("%d",&r);
    printf("Enter the value of t =");
    scanf("%d",&t);
    printf("Simple interest is = %d",p*r*t/100);
    return 0;
}