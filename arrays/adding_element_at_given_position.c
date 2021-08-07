#include <stdio.h>

int main()
{
    int i,n,pos,val,temp;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position at which value is to be added: ");
    scanf("%d",&pos);
    printf("Enter the value to be added: ");
    scanf("%d",&val);
    for(i=n-1;i>=pos;i--){
        temp=arr[i];
        arr[i]=arr[i-1];
        arr[i+1]=temp;
    }
    arr[pos-1]=val;
    for(i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
