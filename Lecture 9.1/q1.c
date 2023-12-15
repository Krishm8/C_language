#include<stdio.h>
int main(){
    char a[20];

    printf("Enter any string = ");
    gets(a);

    printf("Uppercase string = ");
    for (int i = 0; a[i] != '\0'; i++)
    {
        printf("%c", a[i] - 32);
    }
    
    return 0;
}