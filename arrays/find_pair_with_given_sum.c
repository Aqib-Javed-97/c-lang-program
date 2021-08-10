#include <stdio.h>

int main()
{
    int i,j,n,sum,f=0;
    printf("Enter the lenght of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the sum: ");
    scanf("%d",&sum);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                f=1;
                printf("Pair with given sum: %d %d",arr[i],arr[j]);
            }
        }
    }
    if(f==0){
        printf("No such pair found");
    }

    return 0;
}
