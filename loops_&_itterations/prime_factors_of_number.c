#include <stdio.h>

int main()
{
    int num,i,j,isprime;
    printf("Enetr the number: ");
    scanf("%d",&num);
    printf("The prime factors of %d are:\n",num);
    for(i=2;i<=num;i++){
        if(num%i==0){
            isprime=1;
            for(j=2;j<=i/2;j++){
                if(i%j==0){
                    isprime=0;
                    break;
                }
            }
            if(isprime==1){
                printf("%d ",i);
            }
        }
    }

    return 0;
}