#include<stdio.h>
#include<string.h>
int main(){
    FILE *a1=fopen("one.txt","w");

    for (int i = 1; i <= 50; i++)
    {
        if (i%3==0 && i%5==0)
        {
            printf("%d",i);
            fprintf(a1,"%d ",i);
        }
    }
    
    fclose(a1);
    
    return 0;
}