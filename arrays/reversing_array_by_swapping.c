#include <stdio.h>

int main()
{
    int i,n,temp;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-(i+1)];
        arr[n-(i+1)]=temp;
        
    }
    printf("Reversed array\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
