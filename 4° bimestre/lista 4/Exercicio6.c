#include <stdio.h>

int main(){
    int A[8];
    int B[8];
    
    printf("Os elementos de A são:\n");
    for(int i=0; i<8; ++i){
        A[i] = i + 1;
        printf("%i\n", A[i]);
    }
    
    for(int i=0; i<8; ++i){
        B[i] = A[i] * A[i];
    }
    
    printf("Os elementos de B são:\n");
    for(int i=0; i<8; ++i){
        printf("%i\n", B[i]);
    }

    return 0;
}