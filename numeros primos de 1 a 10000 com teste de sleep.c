#include <stdio.h>
#include <time.h>
#include <unistd.h>
int primo(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }   
    }
    return 1;
}

int primosqrt(int n){
    for(int i=2;i<=(float)n*0.5;i++){
        if(n%i==0){
            return 0;
        }   
    }
    return 1;
}

int main(){
    int num = 0;
    time_t start_time = time(NULL);
    for(int i = 1; i<=10000; i++){
        
        if(primo(i) == 1 && i!=1){
            num = i;
            printf(" %d",num);
            
        }
    }
    
    sleep(3); 
    time_t end_time = time(NULL);
    
    double elapsed_seconds = difftime(end_time, start_time);
    
    printf("\n\nThe operation took %lf seconds.\n", elapsed_seconds);
    
    return 0;
}
