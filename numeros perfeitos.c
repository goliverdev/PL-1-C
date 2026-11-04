#include <stdio.h>
int perf(int n){
    int sum = 0;
    for (int i = n-1; i>=1; i--){
        if(n%i==0){
            sum+=i;
        }
        
        else{
            continue;
        }
    }
    if(sum==n){
        return 1;
    }
    return 0;
    
    
}

int main(){
    int n;
    scanf("%d", &n);
    if(n>=1 && n<=1000){
        if (perf(n) == 1){
            printf("É perfeito");
        }
        else{
            printf("Não é perfeito");
        }
    }
    else{
        printf("Valor inserido inválido");
    }
    return 0;
}
