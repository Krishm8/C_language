#include<stdio.h>
int main(){
    int i,j,f=0,ff=1,a;
    printf("enter =");
    scanf("%d",&i);
    printf("%d\n%d\n",f,ff);
    for (int j = 2; j <= i; j++)
    {
        a=f+ff;
        f=ff;
        ff=a;
        printf("%d\n",a);
    }
    
    return 0;
}