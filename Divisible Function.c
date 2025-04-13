#include<stdio.h>

int div(int a, int b);
int div(int a, int b){
    int q=0;
    if(a%b==0){
        q=a/b;
        printf("\n %d is divisible by %d and the Quotient is %d\n",a,b,q);
    }
    else{
        printf("\n %d is not divisible by %d\n",a,b);
    }
    return 0;
}

int main(){
    int x, y;
    printf("Enter the Dividend and the Divisor:\n");
    scanf("%d%d",&x,&y);
    div(x,y);
    return 0;
}
