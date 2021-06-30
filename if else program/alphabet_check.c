#include <stdio.h>

int main()
{
    char c;
    printf("Provide input: ");
    scanf("%c",&c);
    if(c>='a' && c<='z' || c>='A' && c<='Z'){
        printf("It is an alphanet");
    }
    else{
        printf("It is NOT an alphabet");
    }

    return 0;
}