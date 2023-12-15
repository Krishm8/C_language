#include<stdio.h>
int main(){
    int v;
    printf("Enter array size = ");
    scanf("%d",&v);
    int a[v];
    int b[v];
    int c[v];

    printf("Enter array A's elements : \n");
    for (int i = 0; i < v; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    printf("Enter array B's elements : \n");
    for (int i = 0; i < v; i++)
    {
        printf("b[%d] = ",i);
        scanf("%d",&b[i]);
    }

    printf("Array C is = ");
    for (int i = 0; i < v; i++)
    {
        c[i]=a[i]+b[i];
        printf(" %d  ",c[i]);
    }
    

    
    return 0;
}