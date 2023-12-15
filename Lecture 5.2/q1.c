#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first value =");
    scanf("%d",&a);
    printf("Enter the second value =");
    scanf("%d",&b);
    printf("Enter the third value =");
    scanf("%d",&c);
    
    if (a<b)
    {
        if (a<c)
        {
            printf("The minimum value is = %d",a);
        }
        else
        {
            printf("The minimum value is = %d",c);
        }
    }
    else
    {
        if (b<c)
        {
            printf("The minimum value is = %d",b);
        }
        else
        {
            printf("The minimum value is = %d",c);
        }
        
    }
    
    
    
    return 0;
}