#include <stdio.h>
#include <math.h>

int main()
{
    int cofPow2,cofPow1,cofPow0;
    float rt1,rt2,discr,img;
    
    printf("Enter coefficient of x^2: ");
    scanf("%d",&cofPow2);
    printf("Enter coefficient of x^1: ");
    scanf("%d",&cofPow1);
    printf("Enter coefficient of x^0: ");
    scanf("%d",&cofPow0);
    discr = (cofPow1*cofPow1)-(4*cofPow2*cofPow0);
    switch(discr>0){
        case 0:
            switch(discr<0){
                case 0: rt1=rt2=-cofPow1/(2*cofPow2);
                        printf("Roots are real and same: %.2f %.2f",rt1,rt2);
                case 1:rt1 = rt2 = -cofPow1 / (2 * cofPow2);
                        img = sqrt(-discr) / (2 * cofPow2);
                        printf("Roots are complex and same: %.2f + i%.2f and %.2f - i%.2f",rt1,img,rt2,img);
                        break;
            }
        case 1:rt1= (cofPow1+sqrt(discr))/(2*cofPow2);
               rt2= (cofPow1-sqrt(discr))/(2*cofPow2);
               printf("Roots are real and distinct : %.2f %.2f",rt1,rt2);
        break;
    }
    

    return 0;
}