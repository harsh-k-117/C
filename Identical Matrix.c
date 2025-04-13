#include<stdio.h>

int main(){
    int rows, cols, i, j, identical=1;
    printf("Enter the number of rows and columns of the matrices:\n");
    scanf("%d%d",&rows,&cols);

    int matrix1[rows][cols], matrix2[rows][cols];

    printf("\nEnter the elements in Matrix 1:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("\nEnter the elements in Matrix 2:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d",&matrix2[i][j]);
        }
    }

    for(i=0; i<rows; i++){
        for(j=0;j<cols; j++){
            if(matrix1[i][j]!=matrix2[i][j]){
            identical=0;
            break;
            }
        }

    }

    if(identical==0){
        printf("\n The matrices are not Identical\n");
    }
    else{
        printf("\n The matrices are Identical\n");
    }
    return 0;
}
