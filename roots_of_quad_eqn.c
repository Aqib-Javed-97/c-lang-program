#include <stdio.h>
#include <math.h>

int main()
{
    int cofPow2, cofPow1, cofPow0;
    float root1, root2, discr, img;
    printf("Enter coefficient of x^2: ");
    scanf("%d",&cofPow2);
    printf("Enter coefficient of x^1: ");
    scanf("%d",&cofPow1);
    printf("Enter coefficient of x^0: ");
    scanf("%d",&cofPow0);
    
    discr = (cofPow1 * cofPow1) - (4 * cofPow2 *cofPow0);
    if(discr>0){
        root1 = (-cofPow1 + sqrt(discr))/(2*cofPow2);
        root2 = (-cofPow1 - sqrt(discr))/(2*cofPow2);
        printf("Roots are real and distinct: %.2f %.2f",root1,root2);
    }
    else if(discr==0){
        root1 = root2 = -cofPow1/(2*cofPow2);
        printf("Roots are real and same: %.2f %.2f",root1,root2);
    }
    else if(discr<0){
        root1 = root2 = -cofPow1 / (2 * cofPow2);
        img = sqrt(-discr) / (2 * cofPow2);
        printf("Roots are complex and distinct: %.2f + i%.2f and %.2f - i%.2f",root1,img,root2,img);
    }

    return 0;
}
