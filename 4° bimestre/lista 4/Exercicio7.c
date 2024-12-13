#include <stdio.h>

int main(){
    int A[10];
    int B[10];
    int cont = 9;
    
    printf("Os elementos de A são:\n");
    for(int i=0; i<10; ++i){
        A[i] = i + 1;
        printf("%i\n", A[i]);
    }
    
    for(int i=0; i<10; ++i){
        B[i] = A[cont];
        --cont;
    }
    
    printf("Os elementos de B são:\n");
    for(int i=0; i<10; ++i){
        printf("%i\n", B[i]);
    }

    return 0;
}