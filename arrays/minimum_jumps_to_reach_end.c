#include <stdio.h>

int main()
{
    int i,n,sum=0,c=0;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]==0){
            printf("Cannot reach end");
            break;
        }
        else if(sum<n){
            sum=sum+arr[i];
            i+=arr[i];
            c++;
            
        }
    }
    if(c>0){
        printf("Minimum number of jumps required to reach end: %d",c);
    }

    return 0;
}
