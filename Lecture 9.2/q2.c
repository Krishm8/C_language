#include <stdio.h>
#include <string.h>

int main() {
    char email[] = "admin@gmail.com";
    char password[] = "123456";

    char useremail[50];
    char userpassword[50];

    printf("Enter your email: ");
    scanf("%s", useremail);

    printf("Enter your password: ");
    scanf("%s", userpassword);

    if (strcmp(useremail, email) == 0 && strcmp(userpassword, password) == 0) 
    {
        printf("Login Successful...\n");
    } 
    else 
    {
        printf("Login Failed. Invalid Credentials.\n");
    }

    return 0;
}