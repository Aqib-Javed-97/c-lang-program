#include <stdio.h>

int main()
{
    int units;
    float amt,total_amt,sur_charge;
    printf("Enter units: ");
    scanf("%d",&units);
    if(units<=50){
        amt = units *.50;
    }
    else if(units<=150){
        amt=25+((units-50)*.75);
    }
    else if(units<=250){
        amt=100+((units-150)*1.20);
    }
    else{
        amt=220+((units-250)*1.50);
    }
    sur_charge = amt*.20;
    total_amt=amt+sur_charge;
    
    printf("Electricity bill : %.2f",total_amt);

    return 0;
}