#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a =");
    scanf("%d",&a);
    printf("Enter yhe value of b =");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("new value of a is %d\n",a);
    printf("new value of a is %d",b);
    return 0;
}