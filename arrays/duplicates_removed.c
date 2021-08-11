#include <stdio.h>

int main()
{
    int i,j,n,k=0;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int arr[n],uni_arr[n];
    printf("Enter the array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[j]=-1;
            }
        }
        if(arr[i]>-1){
          uni_arr[k]=arr[i];
          k++;
        }
    }
    printf("Array with duplicates removed\n");
    for(i=0;i<k;i++){
        printf("%d ",uni_arr[i]);
    }

    return 0;
}
