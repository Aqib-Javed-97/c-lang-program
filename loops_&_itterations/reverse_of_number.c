#include <stdio.h>

int main()
{
    int num,n,rev_num=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num>0){
        n=num%10;
        num=num/10;
        rev_num=(rev_num*10)+n;
    }
    printf("Reverse = %d",rev_num);

    return 0;
}
