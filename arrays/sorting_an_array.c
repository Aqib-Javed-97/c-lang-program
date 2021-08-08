#include <stdio.h>

int main()
{
    int i,j,n,temp;
    printf("Enter the array length: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(arr[j+1]<arr[j]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array is\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
