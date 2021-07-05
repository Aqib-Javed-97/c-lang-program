#include <stdio.h>
#include <math.h>

int main()
{
    int num,n,first_num,last_num,swap_num,count=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    last_num=num%10;
    first_num=n=num;
    while(first_num>=10){
        first_num=first_num/10;
    }
    while(n>0){
        n=n/10;
        count++;
    }
    swap_num=(num-((pow(10,count-1))*first_num)-last_num)+(((pow(10,count-1))*last_num)+first_num);
    printf("%d",swap_num);

    return 0;
}
