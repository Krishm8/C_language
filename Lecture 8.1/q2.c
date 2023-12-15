#include<stdio.h>
int main(){
    int a;
    printf("Enter array size = ");
    scanf("%d",&a);
    int i[a];
    printf("Ente the elements : \n");
    for (int k = 0; k < a; k++)
    {
        printf("a[%d] = ",k);
        scanf(" %d",&i[k]);
    }
    float sum=0;
    for (int j = 0; j < a ; j++)
    {
        sum=sum+i[j];
    }
    sum=sum/a;
    printf("%.2f",sum);
    return 0;
}