#include <stdio.h>
#include <string.h>
void sg(char a[50])
{
   printf("%d",strlen(a));
}

int main()
{
    char a[50];
    printf("enetr the string=");
    scanf("%s",&a);
    sg(a);
    return 0;
}