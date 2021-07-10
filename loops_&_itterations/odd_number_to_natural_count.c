#include <stdio.h>

int main()
{
    int num,n=0,new_num,i=1;
    printf("Enter the number ");
    scanf("%d",&num);
    while(num!=0){
        n=(n*10)+(num%10);
        num/=10;
    }
    while(n>0){
        new_num=n%10;
        n=n/10;
        if(new_num%2==0){
            printf("%d",new_num);
        }
        else{
            printf("%d",i);
            i++;
        }
    }

    return 0;
}
