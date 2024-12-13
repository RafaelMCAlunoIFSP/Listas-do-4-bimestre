#include <stdio.h>

int main(){
    int A[20];
    int B[30];
    int C[50];
    
    printf("Os elementos de A são:\n");
    for(int i=0; i<20; ++i){
        A[i] = i + 1;
        printf("%i\n", A[i]);
    }
    
    printf("Os elementos de B são:\n");
    for(int i=0; i<30; ++i){
        B[i] = i + 21;
        printf("%i\n", B[i]);
    }
    
    for(int i=0; i<20; ++i){
        C[i] = A[i];
    }
    
    for(int i=0; i<30; ++i){
        C[i+20] = B[i];
    }
    
    printf("Os elementos de C são:\n");
    for(int i=0; i<50; ++i){
        printf("%i\n", C[i]);
    }

    return 0;
}