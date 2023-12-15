#include<stdio.h>
int main(){
    int x;
    printf("Enter array size = ");
    scanf("%d",&x);
    int a[x];
    printf("Enter A's elements : \n");
    for (int i = 0; i < x; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    int y=0;
    printf("The squares are = ");
    for (int t = 0; t < x; t++)
    {
        y=a[t]*a[t];
        printf(" %d\t",y);
    }
    
    return 0;
}