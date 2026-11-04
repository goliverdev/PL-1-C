/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RODADAS 100


int flip(){
    
    int raw_rand = rand() % 2;
    return raw_rand;
    
    
}


int main()
{
    srand(time(NULL));
    int cara = 0;
    
    for(int i = 0; i<RODADAS;i++){
        
        if (flip() == 1){
            cara++;
        }
        
       
        
    }
    
    printf("Cara: %d", cara);
    printf("\nCoroa: %d", RODADAS-cara);
    
    return 0;
}
