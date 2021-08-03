#include <stdio.h>

int main()
{
    int n,i,largest,sec_lar;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    sec_lar=arr[1];
    for(i=1;i<n;i++){
        if(arr[i]>=largest){
            
            sec_lar=largest;
            largest=arr[i];
        }
        else if(arr[i]>sec_lar && arr[i]!=largest){
            sec_lar=arr[i];
        }
    }
    printf("The second largest element of the array is %d",sec_lar);

    return 0;
}
