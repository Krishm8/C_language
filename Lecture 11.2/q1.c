#include<stdio.h>
int main(){
    int a;
    printf("Enter the array's size = ");
    scanf("%d",&a);

    int x[a];
    printf("Enter array elements : \n");
    for (int i = 0; i < a; i++)
    {
        printf("a[%d] = ",i);;
        scanf("%d",&x[i]);
    }
    
    printf("Reversed array elements : \n");
    for (int i = a-1; i >= 0; i--)
    {
        int *b=&x[i];
        printf("%d  ",*b);
    }
    return 0;
}