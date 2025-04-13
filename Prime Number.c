#include<stdio.h>

int main(){
    int n, i, flag=0;
    printf("Enter any Number to check whether the entered number is a prime number or not: ");
    scanf("%d",&n);

    if (n<=1){
        printf("%d is neither a prime number nor a composite number",n);
    }else{
        for (i=2; i<=n/2; ++i)
            if (n%i==0){
                flag=1;
            break;
            }
        }
        if (flag==0)
            printf("%d is a Prime Number",n);
        else
            printf("%d is a Composite Number",n);
            return 0;
}

