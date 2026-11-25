
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

void sumRow(int n, int matrix[n][n]){
    for(int i=0;i<n;i++){
    int sum = 0;
        for(int j=0;j<n;j++){
            sum+=matrix[i][j];
        }
    
    printf("Sum row %d: %d\n", i, sum);
    
        
    }
}


void transposeMatrix(int n, int matrix[n][n]){
    int var = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            var = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = var;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%4d",matrix[i][j]);
        }
        printf("\n");
    }
    
}

void sumColumn(int n, int matrix[n][n]){
    
    for(int i=0;i<n;i++){
    int sum = 0;
        for(int j=0;j<n;j++){
            sum+=matrix[i][j];
        }
    
    printf("Sum row %d: %d\n", i, sum);
    
        
    }
}

void printDiagonal(int n, int matrix[n][n]){
    for(int i = 0; i<n; i++){
        printf("\n%d",matrix[i][i]);
    }
}

void printUpperTriangle(int n, int matrix[n][n]){
    for(int i = 0; i<n;i++){
        for(int j = i; j < n; j++){
            printf("%4d",matrix[i][j]);
            
            
        }
    printf("\n");
    }
}



void printLowerTriangle(int n, int matrix[n][n]){
    for(int i = 0; i<n;i++){
        for(int j = 0; j <= i; j++){
            printf("%4d",matrix[i][j]);
            
            
        }
    printf("\n");
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
    
    printUpperTriangle(n,matrix1);
    
    printf("\n\n");
    
    printLowerTriangle(n,matrix1);
    
    printf("\n\n");
    
    transposeMatrix(n,matrix1);
}
    