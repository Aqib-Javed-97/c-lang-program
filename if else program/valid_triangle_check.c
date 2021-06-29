#include <stdio.h>

int main()
{
    int first_angle,second_angle,third_angle,angle_sum;
    printf("Enter first angle ");
    scanf("%d",&first_angle);
    printf("Enter second angle ");
    scanf("%d",&second_angle);
    printf("Enter third angle ");
    scanf("%d",&third_angle);
    angle_sum = first_angle+second_angle+third_angle;
    if(angle_sum==180){
        printf("It is a valid Triangle");
    }
    else{
        printf("It is NOT a valid Triangle");
    }

    return 0;
}