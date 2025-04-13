#include <stdio.h>

 int main()
 {
 int n, i, sum=0;
 printf("Enter the number of elements in the array: \n");
 scanf("%d",&n);
 int arr[n];
 printf("\nEnter the %d elements: \n",n);

 for(i=0; i<n; i++){
    scanf("%d",&arr[i]);
 }

for(i=0; i<n; i++){
    sum=sum+arr[i];
}

printf("\nThe sum of the elements in the array is: %d ",sum);
 return 0;
 }
