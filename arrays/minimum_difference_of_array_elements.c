#include <stdio.h>

int main()
{
    int i,j,n,diff,min=1000;
    printf("Enter the lenght of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            diff=abs(arr[i]-arr[j]);
            if(diff<min){
                min=diff;
            }
        }
    }
    printf("Minimum difference of array elements: %d",min);

    return 0;
}
