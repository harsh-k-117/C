#include<stdio.h>

int main(){
    int rows, cols, i, j;
    printf("Enter the number of rows and the number of columns of the matrix:\n");
    scanf("%d%d",&rows,&cols);

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    printf("\nEnter the elements Matrix 1:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
        scanf("%d",&matrix1[i][j]);
        }
    }

    printf("\nEnter the elements Matrix 2:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
        scanf("%d",&matrix2[i][j]);
        }
    }

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            result[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }

    printf("\nThe addition of the two matrices is:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
