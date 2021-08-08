#include <stdio.h>

int main()
{
    int i,arr[100],num,c=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=0;num>0;i++){
        arr[i]=num%2;
        num=num/2;
        c++;
    }
    for(i=c-1;i>=0;i--){
        printf("%d ",arr[i]);
    }

    return 0;
}
