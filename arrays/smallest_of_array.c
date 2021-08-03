#include <stdio.h>

int main()
{
    int n,i,smallest;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    smallest=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    printf("The smallest element of the array is %d",smallest);

    return 0;
}
