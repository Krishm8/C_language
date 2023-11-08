#include<stdio.h>
int main(){
    for (int i = 1; i <= 5; i++)
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
            printf(" %d",j);
        }
        printf("\n");
    }
    return 0;
}