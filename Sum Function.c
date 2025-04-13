#include<stdio.h>

int sum(int a);
int sum(int a){
    int sum=0, digit;
    while(a>0){
        digit=a%10;
        sum=sum+digit;
        a=a/10;
    }
    printf("\n The sum of digits is: %d\n",sum);
    return 0;
}

int main(){
    int x;
    printf("\nEnter a number:\n");
    scanf("%d",&x);
    sum(x);
    return 0;
}
