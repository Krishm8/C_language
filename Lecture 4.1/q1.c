#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a =");
    scanf("%d",&a);
    printf("Enter the value of b =");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("swap value of a is %d\n",a);
    printf("swap value of a is %d",b);
    return 0;
}