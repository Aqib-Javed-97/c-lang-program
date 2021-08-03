#include <stdio.h>

int main()
{
    int n,i,sum=0,avg;
    printf("Enter no. of subjects ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the marks in each subject \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    
    printf("Avg marks = %d",avg);


    return 0;
}
