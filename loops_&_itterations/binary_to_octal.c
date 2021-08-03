#include <stdio.h>

int main()
{
    int num,rev_num=0,temp_num,len=0;
    printf("Enter the number ");
    scanf("%d",&num);
    temp_num=num;
    while(temp_num>0){
        rev_num=(rev_num*10)+(temp_num%10);
        temp_num/=10;
        len++;
    }
    
    printf("%d\n",len);
    printf("%d",rev_num);
    
    
    return 0;
}