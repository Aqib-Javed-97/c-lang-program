#include <stdio.h>

int main()
{
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    switch(num1>num2){
        case 0:printf("Second number %d is greater",num2);
        break;
        case 1:printf("First number %d is greater",num1);
        break;
        default:printf("Both numbers are equal");
    }
    

    return 0;
}