#include<stdio.h>
int main(){
    char a[20];

    printf("Enter any string = ");
    gets(a);

    printf("Toggle case string = ");
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 97)
        {
            printf("%c", a[i] - 32);
        }
        else
        {
            printf("%c",a[i]);
        }
        
    }
    
    return 0;
}