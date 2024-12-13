#include <stdio.h>

int main(){
    int A[3][2] = {1,2,3,4,5,6};
    int B[3][2];
    int cont = 1;
    int cont2 = 1;
    
    printf("Os valores de A são:\n");
    for(int i=0; i<3; ++i){
        for(int c=0; c<2; c++){
            printf("%i\n", A[i][c]);
        }
    }
    
    for(int i=0; i<3; ++i){
        for(int c=0; c<2; c++){
            for (cont; cont <= A[i][c]; ++cont){
                cont2 = cont * cont2;
            }
            B[i][c] = cont2;
        }
    }
    
    printf("Os valores de B são:\n");
    for(int i=0; i<3; ++i){
        for(int c=0; c<2; c++){
            printf("%i\n", B[i][c]);
        }
    }

    return 0;
}