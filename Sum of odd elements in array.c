#include<stdio.h>

int main(){
    int n, i, sum=0;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    int arr[n];

    printf("\nEnter the %d elements in the array:\n",n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++){
        if(arr[i]%2!=0){
            sum=sum+arr[i];
        }
    }

    printf("\nThe sum of all the odd elements in the array is: %d\n",sum);
    return 0;

}
