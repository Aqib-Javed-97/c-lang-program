#include <stdio.h>

int main()
{
    int num,i,fir=0,sec=1,fib=1;
    printf("Enetr the number: ");
    scanf("%d",&num);
    if(num==0){
        printf("%d",fir);
    }
    else if(num==1){
        printf("%d %d",fir,sec);
    }
    else{
        printf("%d %d ",fir,sec);
        for(i=2;i<num;i++){
           fib=fir+sec;
           printf("%d ",fib);
           fir=sec;
           sec=fib;
        }
    }
    
    return 0;
}