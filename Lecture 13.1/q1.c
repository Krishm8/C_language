#include<stdio.h>
#include<string.h>
int main(){
    FILE *a=fopen("first.txt","r");
    char arr[100];
    FILE *b=fopen("second.txt","w");

    // printf("%s",arr);
    // fgets(arr,20,a);
    // puts(arr);

    while (fgets(arr,20,a)!=NULL)
    {
        fputs(arr,b);
    }
    

    fclose(a);
    return 0;
}
