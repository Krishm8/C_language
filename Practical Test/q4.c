#include<stdio.h>
int main(){
    int a,b;
    printf("Enter array's rows size = ");
    scanf("%d",&a);
    printf("Enter array's column size = ");
    scanf("%d",&b);

    int arr[a][b];
    printf("Enter array's elements : \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            int *prt=&arr[i][j];
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&*prt);
        }
        
    }

    printf("\nEven numbers is : ");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            int *prt=&arr[i][j];
            if (*prt%2==0)
            {
                printf("%d\t",*prt);
            }
            
        }
        
    }
    

    return 0;
}