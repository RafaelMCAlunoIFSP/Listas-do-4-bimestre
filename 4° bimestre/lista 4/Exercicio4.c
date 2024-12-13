#include <stdio.h>

int main(){
    int A[5] = {6,7,8,9,10};
    int B[5] = {5,4,3,2,1};
    int C[10];
    
    printf("Os elementos de A são:\n");
    for(int i=0; i<5; ++i){
        printf("%i\n", A[i]);
    }
    
    printf("Os elementos de B são:\n");
    for(int i=0; i<5; ++i){
        printf("%i\n", B[i]);
    }
    
    for(int i=0; i<5; ++i){
        C[i] = A[i];
    }
    
    for(int i=0; i<5; ++i){
        C[i+5] = B[i];
    }
    
    printf("Os elementos de C são:\n");
    for(int i=0; i<10; ++i){
        printf("%i\n", C[i]);
    }

    return 0;
}