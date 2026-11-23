
#include <stdio.h>

void readMatrix(int n, int matrix[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Element [%d][%d]: ", i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
}


void printMatrix(int n, int matrix[n][n]){
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        printf("%4d",matrix[i][j]);
        }
    printf("\n");
    }
}

void sumMatrix(int n, int matrix1[n][n], int matrix2[n][n], int sum[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum[i][j] = matrix1[i][j]+matrix2[i][j];
        }
    }
    
}

void printDiagonal(int n, int matrix[n][n]){
    for(int i = 0; i<n; i++){
        printf("\n%d",matrix[i][i]);
    }
}

int main(){
    int n;
    printf("Insira o tamanho das matrizes: ");
    scanf("%d",&n);
    
    int matrix1[n][n];
    int matrix2[n][n];
    int sum[n][n];
    
    
    printf("\nPrimeira matriz:\n");
    readMatrix(n,matrix1);
    printf("\nSegunda matriz:\n");
    readMatrix(n,matrix2);
    
    
    sumMatrix(n, matrix1, matrix2, sum);
    
    printf("\nMatriz resultante:\n");
    
    printMatrix(n,sum);
    
    
    printf("\nDiagonal principal:\n");
    printDiagonal(n,sum);
    return 0;
}