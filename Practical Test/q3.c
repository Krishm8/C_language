#include<stdio.h>
int main(){
    int a,b;

    printf("Enter first year = ");
    scanf("%d", &a);

    printf("Enter last year = ");
    scanf("%d", &b);

    FILE *aa=fopen("leap.txt","w");

    for (int i = a; i <= b; i++)
    {
        if (i % 4 == 0)
        {
            fprintf(aa,"%d\n", i);
        }
    }

    fclose(aa);
    return 0;
}