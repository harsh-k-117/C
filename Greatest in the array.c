#include<stdio.h>

int main(){
    int n, i, big=0, small=0;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    int arr[n];

    printf("\nEnter the %d elements in the array:\n",n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    big=arr[0];
    small=arr[0];
    for(i=0; i<n; i++){
        if(big<arr[i]){
            big=arr[i];
        }
        else if(small>arr[i]){
            small=arr[i];
        }
    }

    printf("\n The largest element in the array is: %d\n",big);
    printf(" The smallest element in the array is: %d",small);
    return 0;
}
