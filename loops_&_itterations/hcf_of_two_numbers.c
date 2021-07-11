#include <stdio.h>

int main()
{
    int num1,num2,i,hcf=0,min;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    min = (num1<num2)?num1:num2;
    for(i=1;i<=min;i++){
        if(num1%i==0 && num2%i==0){
            hcf=i;
        }
    }
    printf("HCF of the given numbers is = %d",hcf);

    return 0;
}
