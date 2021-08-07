#include <stdio.h>

int main()
{
    int i,n,val;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the value to be searched: ");
    scanf("%d",&val);
    printf("Value found at position: ");
    for(i=0;i<n;i++){
        if(arr[i]==val){
            printf("%d",i+1);
        }
    }
    return 0;
}
