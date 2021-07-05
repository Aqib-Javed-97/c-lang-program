#include <stdio.h>

int main()
{
    int num,first_num,last_num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    last_num=num%10;
    first_num=num;
    while(first_num>=10){
        first_num=first_num/10;
    }
    sum=first_num+last_num;
    printf("%d",sum);

    return 0;
}
