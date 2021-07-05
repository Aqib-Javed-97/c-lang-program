#include <stdio.h>

int main()
{
    int num,a,n,rev_num;
    printf("Enter the number: ");
    scanf("%d",&num);
    a=num;
    while(a>0){
        n=a%10;
        a=a/10;
        rev_num=(rev_num*10)+n;
    }
    if(rev_num==num){
        printf("It is palindrome");
    }
    else{
        printf("It is not palindrome");
    }
    
    return 0;
}
