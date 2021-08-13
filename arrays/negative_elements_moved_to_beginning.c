#include <stdio.h>

int main()
{
    int i,j=0,n,temp;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]<0){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
    printf("Array with negatives moved to one side\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
