#include<stdio.h>
int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);

    int arr[a];

    printf("Enter array's elements : \n");
    for (int i = 0; i < a; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < a; i++)
    {
        printf("%d\t",arr[i]*arr[i]);
    }
    
    return 0;
}