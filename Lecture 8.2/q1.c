#include<stdio.h>
int main(){
    int aSize;
    int bSize;
    
    printf("Enter array A's size = ");
    scanf("%d",&aSize);

    printf("Enter array B's size = ");
    scanf("%d",&bSize);

    int a[aSize];
    int b[bSize];
    int c[aSize+bSize];

    printf("Enter array A's elements : \n");
    for (int i = 0; i < aSize; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    
    printf("Enter array A's elements : \n");
    for (int i = 0; i < bSize; i++)
    {
        printf("b[%d] = ",i);
        scanf("%d",&b[i]);
        c[i+aSize]=b[i];
    }
    
    printf("Array C is = ");
    for (int i = 0; i < aSize+bSize; i++)
    {
        printf("%d\t",c[i]);
    }
    
    return 0;
}