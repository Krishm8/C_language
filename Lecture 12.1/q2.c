#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[10];
    int age;
    char role[10];
    char city[10];
    int experience;
    char company_name[20];
};

int main(){
    int n;
    printf("Enter number of employees = \n");
    scanf("%d",&n);

    struct Employee s1[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d's employees details : \n",i+1);

        printf("Enter id = ");
        scanf("%d",&s1[i].id);

        printf("Enter name = ");
        scanf("%s",&s1[i].name);

        printf("Enter age = ");
        scanf("%d",&s1[i].age);

        printf("Enter role = ");
        scanf("%s",&s1[i].role);

        printf("Enter city = ");
        scanf("%s",&s1[i].city);

        printf("Enter experience = ");
        scanf("%d",&s1[i].experience);

        printf("Enter company_name = ");
        scanf("%s",&s1[i].company_name);

        printf("\n\n");
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d's employees details is : \n",i+1);
        printf("Id is = %d\n",s1[i].id);
        printf("Name is = %s\n",s1[i].name);
        printf("Age is = %d\n",s1[i].age);
        printf("role is = %s\n",s1[i].role);
        printf("City is = %s\n",s1[i].city);
        printf("experience is = %d\n",s1[i].experience);
        printf("company_name is = %s\n",s1[i].company_name);
        printf("\n\n");
    }
    return 0;
}