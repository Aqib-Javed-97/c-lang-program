#include <stdio.h>

int main()
{
    int num,n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num>0){
        n=num%10;
        num=num/10;
        sum+=n;
    }
    printf("Sum of digits = %d",sum);

    return 0;
}
