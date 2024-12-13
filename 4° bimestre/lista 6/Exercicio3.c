#include <stdio.h>

int main() {
    int A[10];
    int B[10][3];
    
    printf("Os valores de A são:\n");
    for(int i=0; i<10; ++i){
        A[i] = i + 1;
        printf("%d\n", A[i]);
    }
    
    printf("Os valores de B são:\n");
    for(int i=0; i<10; ++i){
        for(int c=0; c<3; ++c){
            if(c == 0){
                B[i][c] = A[i] + 5;
                printf("%d, ", B[i][c]);
            }
            if(c == 1){
                int cont2 = 1;
                for (int cont=1; cont <= A[i]; ++cont){
                    cont2 = cont * cont2;
                }
                B[i][c] = cont2;
                printf("%d, ", B[i][c]);
            }
            if(c == 2){
                B[i][c] = A[i] * A[i];
                printf("%d", B[i][c]);
            }
        }
        printf("\n");
    }

    return 0;
}