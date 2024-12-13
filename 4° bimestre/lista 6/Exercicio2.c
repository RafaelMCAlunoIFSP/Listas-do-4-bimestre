#include <stdio.h>

int main() {
    int A[7];
    int B[7];
    int C[7][2];
    
    printf("Os valores de A são:\n");
    for(int i=0; i<7; ++i){
        A[i] = i + 1;
        printf("%d\n", A[i]);
    }
    
    printf("Os valores de B são:\n");
    for(int i=0; i<7; ++i){
        B[i] = i + 8;
        printf("%d\n", B[i]);
    }
    
    printf("Os valores de C são:\n");
    for(int i=0; i<7; ++i){
        for(int c=0; c<2; ++c){
            if(c == 0){
                C[i][c] = A[i];
                printf("%d, ", C[i][c]);
            }
            else if(c == 1){
                C[i][c] = B[i];
                printf("%d, ", C[i][c]);
            }
        }
        printf("\n");
    }

    return 0;
}