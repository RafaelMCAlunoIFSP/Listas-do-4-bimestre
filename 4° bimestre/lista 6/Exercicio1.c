#include <stdio.h>

int main() {
    int A[5][3];
    int B[5][3];
    int C[5][3];
    int cont = 0;
    
    printf("Os valores de A são:\n");
    for(int i=0; i<5; ++i){
        A[i][0] = i + 1;
        for(int c=0; c<3; ++c){
            A[i][c] = c + (1 + cont);
            printf("%d, ", A[i][c]);
        }
        cont = cont + 3;
        printf("\n");
    }
    
    printf("Os valores de B são:\n");
    for(int i=0; i<5; ++i){
        B[i][0] = i + 16;
        for(int c=0; c<3; ++c){
            B[i][c] = c + (1 + cont);
            printf("%d, ", B[i][c]);
        }
        cont = cont + 3;
        printf("\n");
    }
    
    for(int i=0; i<5; ++i){
        for(int c=0; c<3; ++c){
            C[i][c] = A[i][c] + B[i][c];
        }
    }
    
    printf("Os valores de C são:\n");
    for(int i=0; i<5; ++i){
        for(int c=0; c<3; ++c){
            printf("%d, ", C[i][c]);
        }
        printf("\n");
    }

    return 0;
}