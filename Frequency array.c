#include<stdio.h>

int main(){
    int n, i, target=0, count=0;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    int arr[n];

    printf("\nEnter the %d elements in the array:\n",n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the element whose frequency is to be counted:\n");
    scanf("%d",&target);
    for(i=0; i<n; i++){
        if(target==arr[i]){
        count++;
        }
    }

    printf("\nThe frequency of %d in the array is: %d",target,count);
    return 0;
}
