#include <stdio.h>

int main()
{
    int i,j,n,c;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Frequency of elemets\n");
    for(i=0;i<n;i++){
        c=1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                c++;
                arr[j]=-1;
            }
        }
        if(arr[i]>-1){
            printf("%d : %d\n",arr[i],c);
        }
    }

    return 0;
}
