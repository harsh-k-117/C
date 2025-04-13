#include<stdio.h>

void printfibonacci(int n);
void printfibonacci(int n){
    int i, first=0, second=1, next;
    if(n<=0){
        printf("Invalid Input");
    }

    printf("\nThe Fibonacci series for %d terms is:\n",n);

    for(i=1; i<=n; i++){
        if(i==1){
            printf("%d ",first);
            continue;
        }

        if(i==2){
            printf("%d ",second);
            continue;
        }

        next=first+second;
        first=second;
        second=next;
        printf("%d ",next);
    }
}

int main(){
    int a;
    printf("Enter the number of terms:\n");
    scanf("%d",&a);
    printfibonacci(a);
    return 0;
}
