#include<stdio.h>
int main(){
    for (int i = 5; i >= 1; i--)
    {
        for (int l = 1; l < i; l++)
        {
            printf("  ");
        }
        
        for (int k = i; k <= 4; k++)
        {
            printf("%d ",k);
        }
        
        for (int j = 5; j >= i; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}