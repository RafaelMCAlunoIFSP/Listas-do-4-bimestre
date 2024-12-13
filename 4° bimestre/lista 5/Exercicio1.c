#include <stdio.h>

int main() {
    int A[12];
    int B[12];
    int cont = 11;
    
    printf("Os elementos de A são:\n");
    for(int i=0; i<12; ++i){
        A[i] = i + 1;
        printf("%i\n", A[i]);
    }
    
    printf("Os elementos de A em ordem descrescente são:\n");
    for(int i=0; i<12; ++i){
        B[i] = A[cont];
        --cont;
        printf("%i\n", B[i]);
    }

    return 0;
}