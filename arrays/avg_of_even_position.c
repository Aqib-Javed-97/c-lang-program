#include <stdio.h>

int main()
{
    int n,i,sum=0,c=0;
    float even_avg;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i=i+2){
        sum=sum+arr[i];
        c++;
    }
    even_avg=sum/c;
    printf("The avg of even elements of the array is %.2f",even_avg);

    return 0;
}
