#include <stdio.h>

int main() {
    int A[4];
    int B[4];
    int C[4][2];
    
    printf("Os valores de A são:\n");
    for(int i=0; i<4; ++i){
        A[i] = i + 1;
        printf("%d\n", A[i]);
    }
    
    printf("Os valores de B são:\n");
    for(int i=0; i<4; ++i){
        B[i] = i + 5;
        printf("%d\n", B[i]);
    }
    
    printf("Os valores de C são:\n");
    for(int i=0; i<4; ++i){
        for(int c=0; c<2; c++){
            if(c == 0){
                C[i][c] = A[i] * 2;
                printf("%d, ", C[i][c]);
            }
            if(c == 1){
                C[i][c] = B[i] - 5;
                printf("%d", C[i][c]);
            }
        }
        printf("\n");
    }

    return 0;
}