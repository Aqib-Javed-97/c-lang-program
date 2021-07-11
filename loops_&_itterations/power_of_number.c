#include <stdio.h>

int main()
{
    int num,expo,result=1,i;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the power of the number: ");
    scanf("%d",&expo);
    for(i=expo;i>0;i--){
        result*=num;
    }
    printf("Number %d raise to the power %d = %d",num,expo,result);

    return 0;
}
