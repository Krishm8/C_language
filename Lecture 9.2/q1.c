#include<stdio.h>
int main()
{
    char a;

    for (int i = 0; i < 6; i++)
    {
        printf("enter password=");
        scanf("%s",&a);
    

     if(a>=65 && a<=90 || a==64 || a==23 || a==0 && a<=9)
     {
        printf("Your password is Strong.");
     }
     else
     {
        printf("Your password is not Strong.");
     }
    }
    return 0;
}