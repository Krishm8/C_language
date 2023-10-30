#include<stdio.h>
int main(){
    float a,b;
    printf("Enter electricity units:");
    scanf("%f",&a);
    
    if (a <= 50)
    {
        b=a*0.50;
        b=b+b*20/100;
        printf("Electricity Bill = Rs.%.2f",b);
        
    }
    else if (a > 50 && a <= 150)
    {
        b=a*0.75;
        b=b+b*20/100;
        printf("Electricity Bill = Rs.%.2f",b);
    }
    else if (a > 150 && a <= 250)
    {
        b=a*1.20;
        b=b+b*20/100;
        printf("Electricity Bill = Rs.%.2f",b);
    }
    else if (a > 250)
    {
        b=a*1.50;
        b=b+b*20/100;
        printf("Electricity Bill = Rs.%.2f",b);
    }
    return 0;
}
//652.5