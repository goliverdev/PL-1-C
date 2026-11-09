
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

void sumRow(int n, int matrix[n][n]){
    
    for(int i=0;i<n;i++){
    int sum = 0;
        for(int j=0;j<n;j++){
            sum+=matrix[i][j];
        }
    
    printf("Sum row %d: %d\n", i, sum);
    
        
    }
}

void sumColumn(int n, int matrix[n][n]){
    
    for(int j=0;j<n;j++){
    int sum = 0;
        for(int i=0;i<n;i++){
            sum+=matrix[i][j];
        }
    
    printf("Sum column %d: %d\n", j, sum);
    
        
    }
}

void sumDiagonal(int n, int matrix[n][n]){
    int mainSum = 0;
    int secondSum = 0;
    
    for(int i=0;i<n;i++){
        mainSum+=matrix[i][i];
        secondSum+=matrix[i][n-1-i];
        
    }
    
    printf("Main diagonal sum: %d\n", mainSum);
    printf("Secondary diagonal sum: %d\n", secondSum);
      
}



int main(){
    int n;
    printf("Insert the matrix size: ");
    scanf("%d",&n);
    
    int matrix[n][n];
    
    readMatrix(n,matrix);
    
    printf("\nMatrix:\n");
    printMatrix(n,matrix);
    
    sumRow(n,matrix);
    sumColumn(n,matrix);
    
    sumDiagonal(n,matrix);

    return 0;
}
