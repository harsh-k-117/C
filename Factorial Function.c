#include<stdio.h>

int factorial(int n);
int factorial(int n){
    int i, fact=1;
    for(i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int num, f=0;
    printf("Enter a Number to calculate it's Factorial:\n");
    scanf("%d",&num);

    if(num<0){
        printf("\nFactorial not defined\n");
    return 1;
    }

    f=factorial(num);
    printf("\nFactorial of %d is: %d\n",num,f);

    return 0;
}
