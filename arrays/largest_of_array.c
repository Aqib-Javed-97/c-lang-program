#include <stdio.h>

int main()
{
    int n,i,largest;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("The largest element of the array is %d",largest);

    return 0;
}
