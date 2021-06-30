#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    switch(num%2){
        case 0:printf("Number %d is even",num);
        break;
        case 1:printf("Number %d is odd",num);
        break;
    }
    

    return 0;
}