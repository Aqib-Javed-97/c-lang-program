#include <stdio.h>

int main()
{
    int i,n,pos,val;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position at which value is to be deleted: ");
    scanf("%d",&val);
    for(i=0;i<n;i++){
        if(arr[i]==val){
            pos=i+1;
        }
    }
    for(i=pos-1;i<n;i++){
        arr[i]=arr[i+1];
    }
    for(i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
