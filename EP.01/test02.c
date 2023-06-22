#include <stdio.h>
#include <conio.h>

#define ko printf("--------------------------------\n");

void main(){
    char name[20];
    double money;

    ko
    printf(" Program Benefit of loan\n");
    ko
    printf("Input name of loan :");
    scanf("%s", &name);
    printf("Input money of loan :");
    scanf("%lf",& money);
    ko
    if(money >= 1000)
    {
        printf("Benefit of loan is : 2.5\n");
    }
    else
    {
        printf("Benfit of laanis : 5.5\n");
    }
    ko
    
    getch();
    
}