#include<stdio.h>
int cube(int a){
    int b;
    b=a*a*a;
    printf("Cube is = %d",b);
}
int main(){
    int x;
    printf("Enter value = ");
    scanf("%d",&x);
    cube(x);
    return 0;
}