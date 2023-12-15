#include<stdio.h>
int main(){
    for (int i = 5; i >= 1; i--)
    {
        for (int l = 1; l <= i; l++)
        {
            printf("%d ",l);
        }
        
        for (int k = i; k < 5; k++)
        {
            printf("    ");
        }
        
        for (int j = i; j >= 1; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    for (int a = 1; a <= 5; a++)
    {
        for (int b = 1; b <= a; b++)
        {
            printf("%d ",b);
        }
        
    
        for (int c = a; c < 5; c++)
        {
            printf("    ");
        }
        for (int d = a; d >= 1; d--)
        {
            printf("%d ",d);
        }
        
        
        printf("\n");
    }
    
    return 0;
}