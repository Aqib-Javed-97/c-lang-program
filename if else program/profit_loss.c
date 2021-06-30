#include <stdio.h>

int main()
{
    int cp,sp,amt;
    printf("Enter cost price: ");
    scanf("%d",&cp);
    printf("Enter selleing price: ");
    scanf("%d",&sp);
    if(cp>sp){
        amt = cp-sp;
        printf("Loss = %d",amt);
    }
    else if(sp>cp){
        amt=sp-cp;
        printf("Profit : %d",amt);
    }
    else{
        printf("No profit No loss");
    }

    return 0;
}