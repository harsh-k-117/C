#include<stdio.h>

int largest(int a, int b, int c);
int largest(int a, int b, int c){
    if(a>b && a>c){
        printf("\nThe greatest number is %d\n",a);
    }
    else if(b>a && b>c){
        printf("\nThe greatest number is %d\n",b);
    }
    else if(c>a && c>b){
        printf("\nThe greatest number is %d\n",c);
    }
    else{
        printf("\nThe numbers are equal\n");
    }
    return 0;
}

int main(){
    int x, y, z;
    printf("\nEnter three numbers:\n");
    scanf("%d%d%d",&x,&y,&z);
    largest(x,y,z);
    return 0;
}
