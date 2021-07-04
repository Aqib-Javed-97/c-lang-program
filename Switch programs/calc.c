#include <stdio.h>

int main()
{
    char op;
    float num1,num2,res=0.0f;
    printf("Enter the first number ");
    scanf("%f",&num1);
    printf("Enter the second number ");
    scanf("%f",&num2);
    printf("Enter operator: ");
    scanf("%c",&op);
    switch(op){
        case '+' : res=num1+num2;
                printf("The sum of the numbers is : ");
                break;
        case '-' : res=num1-num2;
                printf("The subtractiob of the numbers is : ");
                break;
        case '*' : res=num1*num2;
                printf("The multiplication of the numbers is : ");
                break;
        case '/' : res=num1/num2;
                printf("The division of the numbers is : ");
                break;
        default : printf("Please enter a valid operator");
    
    }
    printf("%.2f",res);

    return 0;
}
