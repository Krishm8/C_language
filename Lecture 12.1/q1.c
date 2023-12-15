#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    char name[10];
    int age;
    char course[10];
    char city[10];
    int std;
    char school[20];
};

int main(){
    struct student s1[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter %d's student details : \n",i+1);

        printf("Enter id = ");
        scanf("%d",&s1[i].id);

        printf("Enter name = ");
        scanf("%s",&s1[i].name);

        printf("Enter age = ");
        scanf("%d",&s1[i].age);

        printf("Enter course = ");
        scanf("%s",&s1[i].course);

        printf("Enter city = ");
        scanf("%s",&s1[i].city);

        printf("Enter std = ");
        scanf("%d",&s1[i].std);

        printf("Enter school = ");
        scanf("%s",&s1[i].school);

        printf("\n\n");
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("%d's student details is : \n",i+1);
        printf("Id is = %d\n",s1[i].id);
        printf("Name is = %s\n",s1[i].name);
        printf("Age is = %d\n",s1[i].age);
        printf("Course is = %s\n",s1[i].course);
        printf("City is = %s\n",s1[i].city);
        printf("Std is = %d\n",s1[i].std);
        printf("School is = %s\n",s1[i].school);
        printf("\n\n");
    }
    return 0;
}