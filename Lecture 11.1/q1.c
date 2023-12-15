#include<stdio.h>
int main(){
    int a;
    printf("Enter the array's size = ");
    scanf("%d",&a);

    int x[a];

    printf("Enter array's elements : \n");
    for (int i = 0; i < a; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&x[i]);
    }

    printf("Square of each element : \n");
    for (int i = 0; i < a; i++)
    {
        int *b=&x[i];
        printf("%d  ",(*b)*(*b));
    }
    
    return 0;
}